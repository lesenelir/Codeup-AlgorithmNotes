#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
	Note:
		求最大递增序列长度的话，边界dp[i] = 1; 求最大递增序列之和的话，边界dp[i] = a[i]
	边界: dp[i] = a[i], 转移方程: dp[i] = max(a[i], dp[i-1] + a[i])
*/
int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		int a[1000];
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int dp[1000];
		for(int i = 0; i < n; i++) {
			dp[i] = a[i];
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < i; j++) {
				if(a[j] < a[i] && dp[j] + a[i] > dp[i]){
					dp[i] = dp[j] + a[i];
				}
			}
		}
		
		int res = 0;
		for(int i = 1; i < n; i++) {
			if(dp[i] > dp[res]) {
				res = i;
			}
		}
		printf("%d\n", dp[res]);
	}
	return 0;
}