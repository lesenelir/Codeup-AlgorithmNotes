#include <iostream>
#include <algorithm>
using namespace std;
//完全背包求最小值，且保证恰好装满最优解--->dp[0]=0,dp[1-V]=无穷
const int INF = 99999;

/*
	dp[V] 即为所求  
		初始化（边界）分两种情况：
		1、如果背包要求正好装满则初始化 dp[0] = 0, dp[1~V] = -INF;  
		2、如果不需要正好装满 dp[0~v] = 0;
*/
struct coin{
	int c;//价值
	int w;//重量
}buf[1001];

int main(int argc, char *argv[]) {
	int T;
	while (scanf("%d", &T) != EOF) {
		while (T--) {
			int E, F;//空猪和装满硬币的猪的重量		
			scanf("%d %d", &E, &F);
			int V = F - E;//能装体积
			int n;//使用硬币种类
			scanf("%d", &n);
			for (int i = 0; i < n; i++) {
				scanf("%d %d", &buf[i].c, &buf[i].w);
			}
			
			int dp[1001];
			/*
			此处要求小猪存钱罐恰好装满的情况，所以边界dp[0]=0,其余dp[1-V]为无穷
			这样就能保证最终得到的dp[V]是最优解，且满足恰好装满背包的最优解
			若，没有要求把背包恰好装满，只要求价格尽量大，则初始化dp[0-V]都为0
			*/
			for (int i = 1; i <= V; i++) { //背包问题初始化都是到V 
				dp[i] = INF;
			}
			dp[0] = 0;
			
			//求最大值Max，最小值min,最后直接输出dp[V]
			for (int i = 0; i < n; i++) {
				for (int j = buf[i].w; j <= V; j++) {
					dp[j] = min(dp[j], dp[j-buf[i].w] + buf[i].c);
				}
			}
			if (dp[V] != INF) {
				printf("%d\n", dp[V]);
			} else {
				printf("This is impossible");
			}
			
		}
		
	}
}