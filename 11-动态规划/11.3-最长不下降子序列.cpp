#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 100;
int A[maxn], dp[maxn];

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	//输入元素到数组A中
	for (int i = 1; i <= n; i++) {
		scanf("%d", &A[i]);
	}
	int ans = -1;//记录最大的dp[i]
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			//A[i]前面的元素小于A[i]，并且A[i]跟在以A[j]后面的长度比以A[i]结尾自己LIS长
			if (A[j] <= A[i] && (dp[j] + 1 > dp[i])) {
				dp[i] = dp[j] + 1;
			}
		}
		//找dp数组中最大的那个就是LIS的长度最大值
		ans = max(ans, dp[i]);
	}
	printf("%d", ans);
}