#include <iostream>
#include <algorithm>
using namespace std;
/*
	dp[i][j]表示A[i]之前、B[j]之前的最长公共子序列长度
	边界：dp[i][0] = 0, dp[0][i] = 0; 转移方程: A[i] == B[j] ? dp[i-1][j-1]+1 : max(dp[i-1][j], dp[i][j-1])
*/
int main(int argc, char *argv[]) {
	char A[100], B[100];
	gets(A+1);
	gets(B+1);
	int lenA = strlen(A+1);
	int lenB = strlen(B+1);
	
	int dp[100][100];
	//边界
	for (int i = 0; i <= lenA; i++) {
		dp[i][0] = 0;
	}
	for (int j = 0; j <= lenB; j++) {
		dp[0][j] = 0;
	}
	//转移方程
	for (int i = 1; i <= lenA; i++) {
		for (int j = 1; j <= lenB; j++) {
			if (A[i] == B[j]) {
				dp[i][j] = dp[i-1][j-1] + 1;
			} else {
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	printf("%d", dp[lenA][lenB]);
}