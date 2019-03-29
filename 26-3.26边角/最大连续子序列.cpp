#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1001];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int dp[1001];
		dp[0] = a[0];
		for (int i = 0; i < n; i++) {
			dp[i] = max(a[i], dp[i-1]+a[i]);
		}
		int res = 0;
		for (int i = 1; i < n; i++) {
			if (dp[i] > dp[res]) {
				res = i;
			}
		}
		printf("%d\n", dp[res]);
	}
	
	return 0;
}