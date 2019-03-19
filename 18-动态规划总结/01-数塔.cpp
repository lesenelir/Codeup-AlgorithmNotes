#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[100][100];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		//边界
		int dp[100][100];
		for (int j = 1; j <= n; j++) {
			dp[n][j] = a[n][j];
		}
		//转移方程
		for (int i = n-1; i >= 1; i--) {
			for (int j = 1; j <= i; j++) {
				dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]) + a[i][j];
			}
		}
		//输出最大值
		printf("%d\n", dp[1][1]);
	}
}