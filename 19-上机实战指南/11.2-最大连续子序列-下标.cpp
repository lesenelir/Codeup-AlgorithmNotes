#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[100];
		bool flag = false;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			if(a[i] >= 0) flag = true;
		}
		if (flag == false) { //处理a[i]全为0情况
			printf("0 %d %d", a[0], a[n-1]);
		}
		int dp[100];
		int s[100];  // s[i]表示产生dp[i]的连续序列从a的哪一个元素开始
		//边界
		dp[0] = a[0];
		//状态转移方程
		for (int i = 1; i < n; i++) {
			//dp[i] = max(a[i], dp[i-1]+a[i]);
			if (dp[i-1] + a[i] > a[i]) {
				dp[i] = dp[i-1] + a[i];
				s[i] = s[i-1];
			} else { //只有一个元素
				dp[i] = a[i];
				s[i] = i;
			}
		}
		//找最大的
		int res = 0;
		for (int i = 1; i < n; i++) { //从1开始枚举
			if (dp[i] > dp[res]) {
				res = i;
			}
		}
		printf("%d %d %d", dp[res], dp[s[res]], a[res]);
	}
}