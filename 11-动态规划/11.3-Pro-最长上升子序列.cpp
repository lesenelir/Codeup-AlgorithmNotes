#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 1000;
int A[maxn], dp[maxn];

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	//输入元素
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	int ans = -1;
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (A[j] < A[i] && (dp[j] + 1 > dp[i])) {
				dp[i] = dp[j] + 1;
			}
		}
		ans = max(ans, dp[i]);
	}
	printf("%d", ans);
	
	
}