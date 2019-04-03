#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int m, n;
	while (scanf("%d %d", &m, &n) != EOF) {
		int a[100][100];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		
		int dp[100][100];
		//
		dp[0][0] = a[0][0];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + a[i][j];
			}
		}
		printf("%d\n", dp[m-1][n-1]);
		
		
	}
}