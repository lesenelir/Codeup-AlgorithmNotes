#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

const int maxn = 100;
char S[maxn];
int dp[maxn][maxn];

int main(int argc, char *argv[]) {
	while (gets(S) != NULL) {
		char str[maxn]; //全部变成大写英文字母
		int len = 0, ans = 0; //len保存str的长度,ans保存最长回文子串的长度
		int x, y; //x, y保存回文子串始末位置
		int p[maxn];//保存str在S中的位置
		for (int i = 0; i < strlen(S); i++) {
			if (isalpha(S[i])) {
				str[len] = toupper(S[i]); //小写变大写
				p[len++] = i; //记录位置
			}
		}
		//边界
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < len; i++) {
			dp[i][i] = 1;
			if (i < len - 1) {
				if (str[i] == str[i+1]) {
					dp[i][i+1] = 1;
				}
			}
		}
		//状态转移方程
		for (int L = 3; L <= len; L++) {
			for (int i = 0; i + L - 1 < len; i++) {
				int j = i + L - 1;
				if (S[i] == S[j] && dp[i+1][j-1] == 1) {
					dp[i][j] = 1;	
				}
			}
		}
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < len; j++) {
				if (dp[i][j] && j - i > ans) {
					ans = j - i;
					x = p[i];
					y = p[j];
				}
			}
		}
		for (int i = x; i <= y; i++) {
			printf("%c", str[i]);
		}
	}
}