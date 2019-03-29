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
		for (int i = 0; i < n; i++) {
			dp[i] = 1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (a[j] <= a[i] && dp[j]+1 > dp[i]) {
					dp[i] = dp[j]+1;
				}
			}
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