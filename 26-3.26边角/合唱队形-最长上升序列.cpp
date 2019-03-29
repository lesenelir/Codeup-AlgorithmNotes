#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		int a[1001];
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int dp1[1001], dp2[1001];
		for(int i = 0; i < n; i++) {
			dp1[i] = 1;
			dp2[i] = 1;
		}
		//正序上升序列
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < i; j++) {
				if(a[j] < a[i] && dp1[j] + 1 > dp1[i]) {
					dp1[i] = dp1[j] + 1;
				}
			}
		}
		//倒序上升序列
		for(int i = n-1; i >= 0; i--) {
			for(int j = n-1; j > i; j--) {
				if(a[j] < a[i] && dp2[j] + 1 > dp2[i]) {
					dp2[i] = dp2[j] + 1;
				}
			}
		}
		//找最大值
		int ans = 0;
		for(int i = 0; i < n; i++) {
			ans = max(ans, dp1[i]+dp2[i]-1);
		}
		
		printf("%d\n", n-ans);
		
	}
	
	return 0;
}