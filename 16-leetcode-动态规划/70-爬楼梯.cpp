#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int dp[1000];
		//边界
		dp[0] = 1;
		dp[1] = 2;
		//转移方程
		for (int i = 2; i < n; i++) {
			dp[i] = dp[i-1] + dp[i-2];
		}
		printf("%d\n", dp[n-1]);
	}
}