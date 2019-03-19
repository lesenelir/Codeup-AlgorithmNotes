#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1000];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]); 
		}
		int dp[1000];
		//边界
		dp[0] = 0;
		dp[1] = 0;
		//转移方程
		for (int i = 2; i < n; i++) {
			//(到达前两个台阶的代价)分别加上走(两前个楼梯代价)的最小的一个
			dp[i] = min(dp[i-1] + a[i-1], dp[i-2] + a[i-2]);
		}
		
//		int res = 0;
//		for (int i = 0; i < n; i++) {
//			if (dp[i] < res) {
//				res = dp[i];
//			}
//		}
		printf("%d\n", dp[n]);
	}
}