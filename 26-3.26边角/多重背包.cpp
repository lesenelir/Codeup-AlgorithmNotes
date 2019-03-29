#include <iostream>
#include <cstdio>
using namespace std;

struct E{
	int w;
	int c;
	int num;
}buf[1001];


int main() {
	int n, V;
	while (scanf("%d %d", &n, &V) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%d %d %d", &buf[i].w, &buf[i].c, &buf[i].num);
		}
		int dp[1001];
		for (int i = 0; i <= V; i++) {
			dp[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < buf[i].num; j++) {
				for (int v = V; v >= buf[i].w; v--) {
					dp[v] = max(dp[v], dp[v-buf[i].w] + buf[i].c);
				}
			}
		}
		printf("%d\n", dp[V]);
		
	}
	
		
	return 0;
}