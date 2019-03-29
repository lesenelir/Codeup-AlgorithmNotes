#include <iostream>
#include <algorithm>
using namespace std;

/*
	完全背包定义有N种物品和一个容量为V的背包，每种物品都有无限件可用。第i种物品的体积是w，价值是c。求解将哪些物品装入背包可使这些物品的体积总和不超过背包容量，且价值总和最大。本题要求是背包恰好装满背包时，求出最大价值总和是多少。如果不能恰好装满背包，输出NO
	输入
	第一行： N 表示有多少组测试数据（N<7）。 
	接下来每组测试数据的第一行有两个整数M，V。 M表示物品种类的数目，V表示背包的总容量。(0<M<=2000，0<V<=50000)
	接下来的M行每行有两个整数c，w分别表示每种物品的重量和价值(0<c<100000，0<w<100000)
	输出
	对应每组测试数据输出结果（如果能恰好装满背包，输出装满背包时背包内物品的最大价值总和。 如果不能恰好装满背包，输出NO）
	样例输入
	2
	1 5
	2 2
	2 5
	2 2
	5 1
	样例输出
	NO
	1
*/
struct E {
	int w;//重量
	int c;//价值
}buf[100];

int main(int argc, char *argv[]) {
	int N;
	while (scanf("%d", &N) != EOF) {
		while (N--) {
			int M, V;
			scanf("%d %d", &M, &V);
			for (int i = 0; i < M; i++) {
				scanf("%d %d", &buf[i].w, &buf[i].c);
			}	
			int dp[1001];
			for (int i = 0; i <= V; i++) {
				dp[i] = -999;
			}
			dp[0] = 0;
			for (int i = 0; i < M; i++) {
				for (int v = buf[i].w; v <= V; v++) {
					dp[v] = max(dp[v], dp[v-buf[i].w] + buf[i].c);
				}
			}
				
			if (dp[V] < 0) {
				printf("NO\n");
			} else {
				printf("%d\n", dp[V]);
			}
		}
	}
}