#include <iostream>
#include <algorithm>
using namespace std;
//01-背包问题
int main(int argc, char *argv[]) {
	int C, N;
	while (scanf("%d %d", &C, &N) != EOF) {
		int dp[100];
		//边界 
		for (int i = 0; i <= C ; i++) {
			dp[i] = 0;
		}
		int v, p;
		for (int i = 1; i <= N; i++) {
			scanf("%d %d", &v,&p);
			for (int j = C; j >= v; j--) {
				dp[j] = max(dp[j], dp[j-v] + p);
			}
		}
		cout << dp[C];	
	}
}