#include <iostream>

using namespace std;

int dp[100];

int Fibonacci(int n) {
	if (n == 0 || n == 1) return dp[n];
	if (dp[n] != 0) return dp[n]; //已经计算过了
	else {
		dp[n] = Fibonacci(n-1) + Fibonacci(n-2);
		return dp[n];
	} 
}

int main(int argc, char *argv[]) {
	int n;
	dp[0] = 0, dp[1] = 1;
	while (scanf("%d", &n) != EOF) {
		printf("%d\n", Fibonacci(n));
	}
}