#include <iostream>

using namespace std;
//类似于fibonacci
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		while (n--) {
			int a, b;
			scanf("%d %d", &a, &b);
			int dp[51];//dp[i] i = b-a;
			dp[0] = 1;
			dp[1] = 1;
			for (int i = 2; i < 51; i++) {
				dp[i] = dp[i-1] + dp[i-2];
			}
			printf("%d\n", dp[b-a]);
		}
	}
}