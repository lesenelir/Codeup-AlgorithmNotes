#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) break;
		int dp[56];//dp[i]表示第i年有多少只母牛
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 3;
		for (int i = 4; i <= n; i++) {
			dp[i] = dp[i-1] + dp[i-3];//注意，此处数组下标一定不为0，故要从4开始循环
		}
		printf("%d\n", dp[n]);	
	}
}