#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 1001;
//dp[i][j] = 1 ij是回文串
int main() {
	char S[maxn];
	while (gets(S) != NULL) {
		int len = strlen(S);
		int dp[maxn][maxn];
		memset(dp, 0, sizeof(dp));
		int ans = 1;
		for (int i = 0; i < len; i++) {
			dp[i][i] = 1; //关键步骤
			if (i < len-1) {
				if (S[i] == S[i+1]) {
					dp[i][i+1] = 1;
					ans = 2;
				}
			}
		}
		for (int L = 3; L <= len; L++) {
			for (int i = 0; i + L - 1 < len; i++) {
				int j = i + L - 1;
				if (S[i] == S[j] && dp[i+1][j-1] == 1) {
					dp[i][j] = 1;
					ans = L;
				}
			}
		}
		
		printf("%d\n", ans);
	}
	return 0;
}