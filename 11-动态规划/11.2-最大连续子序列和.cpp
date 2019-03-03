#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 100;
int A[maxn], dp[maxn]; //A[i]存放序列,dp[i]存放以A[i]结尾的连续序列最大和

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	//边界
	dp[0] = A[0];
	for (int i = 1; i < n; i++) {
		dp[i] = max(A[i], dp[i-1]+A[i]);//转移方程
	}
	//k保存dp[i]遍历的最大值下标
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (dp[i] > dp[k]) {
			k = i
		}
	}
	printf("%d\n", dp[k]);
}