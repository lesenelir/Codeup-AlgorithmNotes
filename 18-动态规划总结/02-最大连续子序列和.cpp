#include <iostream>
#include <algorithm>
using namespace std;
/*
	dp[i]表示以a[i]作为结尾的连续序列最大和
	边界：dp[0] = a[0], dp[i] = max(a[i], dp[i-1]+a[i]);
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
		dp[0] = a[0];
		//转移方程
		for (int i = 1; i < n; i++) { //此处是从i=1开始循环，除了第一个元素
			dp[i] = max(a[i], dp[i-1]+a[i]);
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