#include <iostream>

using namespace std;
/*
	dp[i][j]表示到达i, j的走法个数，其值等于上面的路径和左边路径的总和
	第一行和第一列的走法只有一种，一直右，一直下，都是1种走法。
*/
int main(int argc, char *argv[]) {
	int n, m;
	while (scanf("%d %d", &n, &m)) {
		int dp[100][100];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (i == 1 || j == 1) {
					dp[i][j] = 1;
				} else {
					dp[i][j] = dp[i][j-1] + dp[i-1][j];
				}	
			}
		}
		printf("%d\n", dp[n][m]);
	}
}