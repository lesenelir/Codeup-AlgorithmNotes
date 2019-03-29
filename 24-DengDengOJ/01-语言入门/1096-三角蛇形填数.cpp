#include <iostream>
#include <cstring>
using namespace std;

const int maxn = 100;
int a[maxn][maxn];

int main(int argc, char *argv[]) {
	int T;
	while (scanf("%d", &T) != EOF) {
		while (T--) {
			int n;
			scanf("%d", &n);
			memset(a, 0, sizeof(a));
			int x = 0, y = 0;
			a[x][y] = 1;
			int count = 1;
			while (count < ((n+1)*n) / 2) {
				while (y+1 < n-x && !a[x][y+1]) { //此处不能写成a[x][y+1] != 0
					a[x][++y] = ++count;
				}
				while (x+1 < n && y-1 >= 0 && !a[x+1][y-1]) {
					a[++x][--y] = ++count;
				}
				while (x-1 >= 0 && !a[x-1][y]) {
					a[--x][y] = ++count;
				}			
			}
			
			
			for (int i = 0; i < n; i++) {
				for (int j = 0; j <n-i; j++) { //倒三角n-i
					printf("%d ", a[i][j]);
				}
				printf("\n");
			}
			
		}
	}
}