#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct E{
	int w;
	int c;
}buf[1001];

int main() {
	int n, V;
	while (scanf("%d %d", &n, &V) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &buf[i].w);
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &buf[i].c);
		}
		int dp[1001];
		for (int i = 0; i <= V; i++) {
			dp[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			for (int v = buf[i].w; v <= V; v++) {
				dp[v] = max(dp[v], dp[v-buf[i].w] + buf[i].c);
			}
		}
		
		printf("%d\n", dp[V]);
	}
	
	return 0;
}