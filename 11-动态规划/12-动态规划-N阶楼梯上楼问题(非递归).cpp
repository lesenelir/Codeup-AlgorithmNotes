#include <iostream>
#include <cstring>
using namespace std;
/*
递归版本：
int function(int n) {
	if(n == 1) return 1;
	else if(n == 2) return 2;
	else return function(n-1) + function(n-2);
}
*/
const int maxn = 100;
int main() {
	int n;
	int dp[maxn];
	dp[1] = 1;
	dp[2] = 2;
	for(int i = 3; i < 90; i++) {
		dp[i] = dp[i-1] + dp[i-2];
	}    
	while(scanf("%d", &n) != EOF) {
		printf("%d\n", dp[n]);
	}

	return 0;
}