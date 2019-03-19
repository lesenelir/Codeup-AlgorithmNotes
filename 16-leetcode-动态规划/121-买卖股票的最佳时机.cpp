#include <iostream>
#include <algorithm>
using namespace std;
//目前最小价格 = Min{当天价格，目前最小价格}.  
//目前最大收益 = Max{当天价格 - 目前最小价格， 目前最大收益}

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1000];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int dpmin[1000];
		//边界
		dpmin[0] = a[0];
		//转移方程
		for (int i = 1; i < n; i++) {
//			if (dpmin[i-1] < a[i]) {
//				dpmin[i] = dpmin[i-1];
//			} else { //a[i] <= dp[i-1]
//				dpmin[i] = a[i];
//			}
			dpmin[i] = min(dpmin[i-1], a[i]);
		}
		int res = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] - dpmin[i] > res) {
				res = a[i] - dpmin[i];
			}
		}
		printf("%d\n", res);
	}
}