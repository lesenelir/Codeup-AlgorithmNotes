#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF) {
		int A[100];
		for (int i = 1; i <= m; i++) {
			scanf("%d", &A[i]);
		}
		int L;
		scanf("%d", &L);
		int B[100];
		for (int i = 1; i <= L; i++) {
			scanf("%d", &B[i]);
		}
		int dp[100][100];
		//边界
		for (int i = 0; i <= m; i++) {
			dp[i][0] = 0;
		}
		for (int i = 0; i <= L; i++) {
			dp[0][i] = 0;
		}
		//状态转移方程
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= L; j++) {
				if (A[i] == B[j]) {
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + 1;
				} else {
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				}
			}
		}
		//输出dp[lenA][lenB]
		printf("%d", dp[m][L]);
	}
}