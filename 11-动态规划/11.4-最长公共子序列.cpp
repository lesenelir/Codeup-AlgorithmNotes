#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 100;
char A[maxn], B[maxn];
int dp[maxn][maxn];

int main(int argc, char *argv[]) {
	int n;
	gets(A+1);
	gets(B+1);
	int lenA = strlen(A+1);
	int lenB = strlen(B+1);
	//边界
	for (int i = 0; i <= lenA; i++) {
		dp[i][0] = 0;
	}
	for (int j = 0; j <= lenB; j++) {
		dp[0][j] = 0;
	}
	//状态转移方程
	for (int i = 1; i <= lenA; i++) {
		for (int j = 1; j <= lenB; j++) {
			if (A[i] == B[j]) {
				dp[i][j] = dp[i-1][j-1] + 1;
			} else {
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	printf("%d\n", dp[lenA][lenB]);
	
}