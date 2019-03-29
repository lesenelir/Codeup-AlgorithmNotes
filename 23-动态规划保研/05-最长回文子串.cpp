#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	char S[1001];	
	gets(S);
	int len = strlen(S), ans = 1;
	//边界
	int dp[1001][1001];
	//memset(dp, 0, sizeof(dp));
	for (int i = 0; i < len; i++) {
		dp[i][i] = 1;
		if (i < len-1) {
			if (S[i] == S[i+1]) {
				dp[i][i+1] = 1;
				ans = 2;
			}
		}
	}
	//状态转移方程
	for (int L = 3; L <= len; L++) {
		for (int i = 0; i+L-1 < len; i++) {
			int j = i+L-1;
			if (S[i] == S[j] && dp[i+1][j-1] == 1) {
				dp[i][j] = 1;
				ans = L;
			}
		}
	}
	
	printf("%d", ans);
	
}