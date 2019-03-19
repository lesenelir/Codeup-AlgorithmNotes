#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1000];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int dp[1000];
		//边界
		dp[0] = a[0];
		//状态转移方程
		for (int i = 1; i < n; i++) {
			dp[i] = max(a[i], dp[i-1] + a[i]);
		}
		//取最大值
		int res = 0;
		for (int i = 0; i < n; i++) {
			if (dp[i] > res) {
				res = dp[i];
			}
		}
		printf("%d\n", res);
	}
}