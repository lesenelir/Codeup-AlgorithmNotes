#include <stdio.h>

int function(int n) {
	if (n == 0) {
		return 1; 
	} else {
		return function(n - 1) * n;
	}
}
int main(int argc, char *argv[]) {
	int n, result;
	scanf("%d", &n);
	result = function(n);
	printf("%d", result);
}