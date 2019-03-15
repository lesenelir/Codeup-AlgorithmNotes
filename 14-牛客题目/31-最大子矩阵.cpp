#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

/*最大子矩阵：压缩矩阵成一维矩阵，每一维矩阵进行一次最大连续序列之和求解*/

int lsm(int A[], int lenA) { //一维最大连续序列和
	int dp[101];
	dp[0] = A[0];
	for(int i = 1; i < lenA; i++) { //转移方程
		dp[i] = max(A[i], dp[i-1] + A[i]);
	}
	int res = 0;
	for(int i = 1; i < lenA; i++) {
		if(dp[i] > dp[res]) {
			res = i;
		}
	}
	return dp[res];
}


int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		int a[1001][1001];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		//二维矩阵压缩处理
		int temp[101];
		int max_sum = -127; //记录最大子矩阵和
		for(int i = 0; i < n; i++) {
			memset(temp, 0, sizeof(temp));
			for(int j = i; j < n; j++) {
				for(int k = 0; k < n; k++) {
					temp[k] = temp[k] + a[j][k]; //temp[k]表示第i行到第j行各列和
				}
				max_sum = max(max_sum, lsm(temp, n));//加了一行就求一次最大子序列和
			}
			
		}
		printf("%d\n", max_sum);
	}
	
	return 0;
}