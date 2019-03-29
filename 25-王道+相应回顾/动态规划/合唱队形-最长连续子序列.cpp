#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1001];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		//边界
		int dp1[1001], dp2[1001];
		for (int i = 0; i < n; i++) {
			dp1[i] = 1;
			dp2[i] = 1;
		}
		//状态转移方程
		//上升
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (a[j] < a[i] && dp1[j] + 1 > dp1[i]) {
					dp1[i] = dp1[i] + 1;
				}
			}
		}
		//下降
		for (int i = n-1; i >= 0; i--) {
			for (int j = n-1; j > i; j--) {
				if (a[j] < a[i] && dp2[j] + 1 > dp2[i]) {
					dp2[i] = dp2[j] + 1;
				}
			}
		}
		//找最大值
		int res1 = 0;
		for (int i = 1; i < n; i++) {
			if (dp1[i] > dp1[res1]) {
				res1 = i;
			}
		}
		int res2 = 0;
		for (int i = n-1; i >= 0; i--) {
			if (dp2[i] < dp2[res2]) {
				res2 = i;
			}
		}
		//会减去重复数值，故要加一
		int ans = n - dp1[res1] - dp2[res2] + 1;
		printf("%d\n", ans);
		
	}
}