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
		for (int i = 0; i <= V; i++) {
			dp[i] = 0;
		}
		
		for (int i = 0; i < n; i++) {
			for (int v = V; v >= w[i]; v--) {
				dp[v] = max(dp[v], dp[v-w[i]] + c[i]);
			}
		}
		
		int res = 0;
		for (int i = 1; i <= V; i++) {
			if (dp[i] > dp[res]) {
				res = i;
			}
		}
		printf("%d\n", dp[res]);
	}
}