#include <iostream>
#include <algorithm>
using namespace std;
/*
	dp[v]表示存入v所获的最大价值
	0-1背包问题，边界: dp[v] = 0,状态转移方程:dp[v] = max(dp[v], dp[v-w[i]] + c[i]) 逆序
*/
int main(int argc, char *argv[]) {
	int n, V;
	while (scanf("%d %d", &n, &V) != EOF) {
		int w[100], c[100];
		for (int i = 1; i <= n; i++) { // 从1开始
			scanf("%d", &w[i]);
		}
		for (int i = 1; i <= n; i++) {
			scanf("%d", &c[i]);
		}
		int dp[100];
		//边界
		for (int v = 0; v <= V; v++) {
			dp[v] = 0;
		}
		//状态转移方程
		for (int i = 1; i <= n; i++) {
			for (int v = V; v >= w[i]; v--) {
				dp[v] = max(dp[v], dp[v-w[i]] + c[i]);
			}
		}
		//找最大值
		int res = 0;
		for (int i = 1; i <= V; i++) {
			if (dp[i] > dp[res]) {
				res = i;
			}
		}
		printf("%d\n", dp[res]);
	}
}