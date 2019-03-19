#include <iostream>
#include <algorithm>
using namespace std;

//简单dp
int main(int argc, char *argv[]) {
	int n;
	int a[1000]; //a[i]表示每家店的价值
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int dp[1000];
		//边界
		dp[0] = a[0];
		dp[1] = max(a[0], a[1]);
		//状态转移方程
		for (int i = 2; i < n; i++) {
			dp[i] = max(dp[i-1], dp[i-2] + a[i]);
		}
		//printf("%d\n", dp[n-1]);
		//取最大值
		int max = 0;
		for (int i = 0; i < n; i++) {
			if (dp[i] > max) {
				max = dp[i];
			}
		}
		printf("%d\n", max);
	}
}