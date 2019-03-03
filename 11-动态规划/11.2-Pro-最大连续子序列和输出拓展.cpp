#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 100;
int A[maxn], dp[maxn];

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) break;
		bool flag = false;
		//输入
		for (int i = 0; i < n; i++) {
			scanf("%d", &A[i]);
			if (A[i] > 0) flag = true;
		}
		//输入的元素全部为负数，输出首位元素
		if (flag == false) { 
			printf("%d %d %d", 0, A[0], A[n-1]);
		} else { //当输入的有正数的时候进行正常的最大连续子序列和步骤
			//边界
			dp[0] = A[0];
			for (int i = 1; i < n; i++) {
				dp[i] = max(A[i], dp[i-1]+A[i]);
			}
			//k保存遍历dp[i]中最大的
			int k = 0;
			for (int i = 1; i < n; i++) {
				if (dp[i] > dp[k]) {
					k = i;
				}
			}
			//找最大连续子序列第一个和最后一个元素,num记录从结束位置开始记录相加值
			int num = 0;
			for (int i = k; i >= 0; i--) {
				num = num + A[i];
				if (num == dp[k]) {
					num = i;
					break;
				}
			}
			printf("%d %d %d", dp[k], A[num], A[k]);
		}			
	}
}