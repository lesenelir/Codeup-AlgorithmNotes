#include <iostream>

using namespace std;
/*
	dp[i]=1, 找一个j从数组开始小于i循环。
*/
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1001];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int dp[1001];
		//边界
		for (int i = 0; i < n; i++) {
			dp[i] = 1;
		}
		//状态转移方程
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (a[j] <= a[i] && dp[j] + 1 > dp[i]) {
					dp[i] = dp[j] + 1;
				}
			}
		}
		//找最大值
		int res = 0;
		for (int i = 1; i < n; i++) {
			if (dp[i] > dp[res]) {
				res = i;
			}
		}
		
		printf("%d", dp[res]);
		
	}
}