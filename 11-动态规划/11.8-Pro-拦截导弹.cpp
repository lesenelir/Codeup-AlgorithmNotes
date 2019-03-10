#include <iostream>

using namespace std;
//类似于最长不下降子序列问题
int main(int argc, char *argv[]) {
	int k;
	while (scanf("%d", &k) != EOF) {
		if (k == 0) break;
		int a[100];
		for (int i = 0; i < k; i++) {
			scanf("%d", &a[i]);
		}
		int dp[100];
		for (int i = 0; i < k; i++) {
			dp[i] = 1;//边界
			for (int j = 0; j < i; j++) { //j是i之前的元素
				if (a[j] >= a[i] && dp[j] + 1 > dp[i]) {
					dp[i] = dp[j] + 1;
				}
			}
		}
		//求出最值
		int res = 0;
		for (int i = 0; i < k; i++) {
			if (dp[i] > res) {
				res = dp[i];
			}
		}
		printf("%d\n", res);
	}
}