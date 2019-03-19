#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int T;
	while (scanf("%d", &T) != EOF) {
		while (T != 0) {
			int N;
			scanf("%d", &N);
			int a[100];
			for (int i = 1; i <= N; i++) {
				scanf("%d", &a[i]);
			}
			int dp[100];
			//边界
			dp[0] = a[0];
			//状态转移方程
			for (int i = 1; i <= N; i++) {
				dp[i] = max(a[i], dp[i-1] + a[i]);
			}
			//输出
			int res = 0;
			for (int i = 1; i <= N; i++) {
				if (dp[i] > res) {
					res = dp[i];
				}
			}
			printf("%d\n", res);
			
			T--;
		}
	}
}