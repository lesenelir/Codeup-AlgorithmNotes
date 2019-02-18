#include <stdio.h>


int Fibonacci(int n) {
	if(n == 1 || n == 2) {
		return 1;
	} else {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}
int main(int argc, char *argv[]) {
	int i, result;
	scanf("%d", &i);
	result = Fibonacci(i);	//变量存储递归结果 
	printf("%d\n", result);
}
