#include <iostream>
using namespace std;
/*
	dp[i]表示以a[i]作为结尾的最长不下降序列和
	边界：dp[i] = 1; 转移方程 : (a[j] <= a[i] && dp[j]+1 > dp[i]) =====>j < i;
*/
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[100];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int dp[100];
		//边界
		for (int i = 0; i < n; i++) {
			dp[i] = 1;
		}
		//转移方程
		for (int i = 0; i < n; i++) {
			for (int j= 0; j < i; j++) {
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
		printf("%d\n", dp[res]);
	}	
}