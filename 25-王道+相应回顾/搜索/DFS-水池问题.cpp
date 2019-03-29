#include <iostream>

using namespace std;

const int maxn = 1001;
int a[maxn][maxn];
int n, m;

void dfs(int x, int y) {
	//未出界，且访问的点数值是1。输入从数组0开始所以x>=0
	if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == 1) { 
		a[x][y] = 0;//把当前访问的结点的数值从1变0，表示访问过了  
		dfs(x-1, y);//上
		dfs(x+1, y);//下
		dfs(x, y-1);//左
		dfs(x, y+1);//右
	}
}


int main(int argc, char *argv[]) {
	int T;
	while (scanf("%d", &T) != EOF) {
		while (T--) {
			scanf("%d %d", &n, &m);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					scanf("%d", &a[i][j]);
				}
			}
			int sum = 0;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (a[i][j] == 1) {
						sum++;
						dfs(i, j);
					}
				}
			}
			printf("%d\n", sum);
		}
	}
}