#include <iostream>

using namespace std;


int lsm(int a[], int n) {
	int dp[1001];
	dp[0] = a[0];
	for (int i = 1; i < n; i++) {
		dp[i] = max(dp[i-1]+a[i], a[i]);
	}
	int res = 0;
	for (int i = 1; i < n; i++) {
		if (dp[i] > dp[res]) {
			res = i;
		}
	}
	return dp[res];
}



int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1001][1001];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		
		int temp[1001];
		int maxsum = 0;
		for (int i = 0; i < n; i++) {
			memset(temp, 0, sizeof(temp));
			for (int j = i; j < n; j++) {
				for (int k = 0; k < n; k++) {
					temp[k] = temp[k] + a[j][k];
				}
				maxsum = max(maxsum, lsm(temp, n));
			}
		}
		printf("%d\n", maxsum);
		
		
		
	}
}