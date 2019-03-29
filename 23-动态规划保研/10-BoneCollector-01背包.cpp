#include <iostream>

using namespace std;
//01背包问题
int main(int argc, char *argv[]) {
	int T;
	while (scanf("%d", &T) != EOF) {
		while (T--) {
			int n, V;
			scanf("%d %d", &n, &V);
			int w[100], c[100];
			for (int i = 0; i < n; i++) {
				scanf("%d", &c[i]);
			}
			for (int i = 0; i < n; i++) {
				scanf("%d", &w[i]);
			}
			int dp[100];
			//边界
			for (int i = 0; i <= V; i++) {
				dp[i] = 0;
			}
			//状态转移方程
			for (int i = 0; i < n; i++) {
				for (int v = V; v >= w[i]; v--) {
					dp[v] = max(dp[v], dp[v-w[i]] + c[i]);
				}
			}
			//找最大值
			int res = 0;
			for (int v = 1; v <= V; v++) {
				if (dp[v] > dp[res]) {
					res = v;
				}
			}
			printf("%d\n", dp[res]);
			
		}
	}
}