#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	char A[100];
	char B[100];
	gets(A+1);
	gets(B+1);
	int lenA = strlen(A+1);
	int lenB = strlen(B+1);
	//最长公共子序列-动态规划
	int dp[100][100];
	//边界
	for(int i = 0; i <= lenA; i++) {
		dp[i][0] = 0;
	}
	for(int i = 0; i <= lenB; i++) {
		dp[0][i] = 0;
	}
	//状态转移方程
	for(int i = 1; i <= lenA; i++) {
		for(int j = 1; j <= lenB; j++) {
			if(A[i] == B[j]) {
				dp[i][j] = dp[i-1][j-1] + 1;
			} else {
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	//输出最大公共子序列
	printf("%d\n", dp[lenA][lenB]);
	return 0;
}