#include <iostream>
#include <cstring>
using namespace std;
/*
	dp[i][j]表示S[i]至S[j]所表示的子串是否为回文子串
*/
int main(int argc, char *argv[]) {
	char S[1000];
	gets(S);
	int len = strlen(S), res = 1;
	int dp[1000][1000];
	memset(dp, 0, sizeof(dp));
	//边界
	for (int i = 0; i < len; i++) {
		dp[i][i] = 1;
		if (i < len - 1) {
			if (S[i] == S[i+1]) {
				dp[i][i+1] = 1;
				res = 2; //初始化时注意当前最长回文子串长度
			}
		}
	}
	//状态转移方程
	for (int L = 3; L <= len; L++) { //枚举子串长度
		for (int i = 0; i + L - 1 < len; i++) { //枚举子串的起始端点
			int j = i + L - 1; //子串右端点
			if (S[i] == S[j] && dp[i+1][j-1] == 1) {
				dp[i][j] = 1;
				res = L;
			}
		}
	}
	printf("%d\n", res);
}