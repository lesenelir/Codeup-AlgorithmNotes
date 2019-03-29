#include <iostream>

using namespace std;

//多重背包(MultiplePack): 有N种物品和一个容量为V的背包。
//第i种物品最多有num[i]件可用，每件费用是w[i]，价值是c[i]。
//求解将哪些物品装入背包可使这些物品的费用总和不超过背包容量，

struct E{
	int w;
	int c;
	int num;
}buf[1001];


int main(int argc, char *argv[]) {
	int T;
	while (scanf("%d", &T) != EOF) {
		while (T--) {
			int V, n;
			scanf("%d %d", &V, &n);
			for (int i = 0; i < n; i++) {
				scanf("%d %d %d", &buf[i].c, &buf[i].w, &buf[i].num);
			}
			
			int dp[1001];
			for (int i = 0; i <= V; i++) {
				dp[i] = 0;
			}
			
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < buf[i].num; j++) {  //把数量级展开
					for (int v = V; v >= buf[i].c; v--) {//输出最多重量，把价格减去加上重量
						dp[v] = max(dp[v], dp[v-buf[i].c] + buf[i].w);
					}
				}
			}
			printf("%d\n", dp[V]);
		}
	}
}