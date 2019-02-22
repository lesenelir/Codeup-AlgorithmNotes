#include <iostream>

using namespace std;

int Fibonacci(int n) {
	if (n == 0 || n == 1) return 1;
	else return Fibonacci(n-1) + Fibonacci(n-2);
}
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int result = Fibonacci(n);
	printf("%d", result);
}