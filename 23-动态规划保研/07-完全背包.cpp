#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n, V;
	while (scanf("%d %d", &n, &V) != EOF) {
		int w[1001], c[1001];
		for (int i = 0; i < n; i++) {
			scanf("%d", &w[i]);
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &c[i]);
		}
		
		int dp[1001];
		//边界
		for (int v = 0; v <= V; v++) {
			dp[v] = 0;
		}
		//状态转移方程
		for (int i = 0; i < n; i++) {
			for (int v = w[i]; v <= V; v++) {
				dp[v] = max(dp[v], dp[v-w[i]]+c[i]);
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