#include <iostream>
#include <algorithm>
using namespace std;

/*
	dp[0] = a[0]; dp[i] = max(a[i],dp[i-1]+a[i]);
*/
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1001];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		//边界
		int dp[1001];
		dp[0] = a[0];
		//转移方程
		for (int i = 1; i < n; i++) {
			dp[i] = max(a[i], dp[i-1]+a[i]);
		}
		//求最大值
		int res = 0;
		for (int i = 1; i < n; i++) {
			if (dp[i] > dp[res]) {
				res = i;
			}
		}
		printf("%d\n", dp[res]);
	}	
}
