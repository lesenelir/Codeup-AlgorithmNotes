#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char *argv[]) {
	int T;
	while (scanf("%d", &T) != EOF) {
		while (T--) {
			int a[100][100];
			memset(a, 0, sizeof(a));
			int n;
			scanf("%d", &n);
			int count = 1;
			int x = 0, y = n-1;
			a[x][y] = 1;
			while(count < n * n) {
				while(x+1 < n && !a[x+1][y]) a[++x][y] = ++count; //先判断越界，再判断格子是否填过数 
				while(y-1 >= 0  && !a[x][y-1]) a[x][--y] = ++count;
				while(x-1 >= 0  && !a[x-1][y]) a[--x][y] = ++count;
				while(y+1 < n && !a[x][y+1]) a[x][++y] = ++count;     
			}
			for(x = 0; x < n; x++) {
				for(y = 0; y < n; y++) {
					printf("%d ", a[x][y]);
				}
				printf("\n");
			}
		}
	}
}