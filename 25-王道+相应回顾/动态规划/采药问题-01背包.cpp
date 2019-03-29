#include <iostream>
#include <algorithm>
using namespace std;

struct E {
	int w;
	int c;
}buf[1001];

int main(int argc, char *argv[]) {
	int T, M;
	while (scanf("%d %d", &T, &M) != EOF) {
		int a[1001];
		for (int i = 0; i < M; i++) {
			scanf("%d %d", &buf[i].w, &buf[i].c);
		}
		int dp[1001];
		for (int i = 0; i <= T; i++) {
			dp[i] = 0;
		}
		for (int i = 1; i <= T; i++) {
			for (int v = T; v >= buf[i].w; v--) {
				dp[v] = max(dp[v], dp[v-buf[i].w] + buf[i].c);
			}
		}
		
		int res = 0;
		for (int i = 1; i <= T; i++) {
			if (dp[i] > dp[res]) {
				res = i;
			}
		}
		printf("%d\n", dp[res]);
	}	
}