#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int K;
	while(scanf("%d", &K) != EOF) {
		if(K == 0) break;
		int a[10001];
		bool flag = false;
		for(int i = 0; i < K; i++) {
			scanf("%d", &a[i]);
			if(a[i] >= 0) flag = true;
		}
		if(flag == false) {
			printf("%d %d %d", 0, a[0], a[K-1]);
		} else {
			int dp[10001];
			dp[0] = a[0];
			
			for(int i = 1; i < K; i++) {
				dp[i] = max(a[i], dp[i-1] + a[i]);
			}
			int res = 0; //res保存dp[i]的最大子序列长度值，dp[i]是以a[i]为结尾的长度,故最大连续子序列结束是a[res]
			for(int i = 1; i < K; i++) {
				if(dp[i] > dp[res]) {
					res = i;
				}
			}
			//求最大连续子序列的最开始元素思路是从下标res开始往前倒推使得，sum和为最大子序列长度则此时a[i]为最大子序列开始下标
			int start = 0, sum = 0; 
			for(int i = res; i >= 0; i--) {
				sum = sum + a[i];
				if(sum == dp[res]) {
					start = i;
				}
			}
			printf("%d %d %d\n", dp[res], a[start], a[res]);
		}
	
	}
	return 0;
}