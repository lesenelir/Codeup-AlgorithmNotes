#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, char a, char b, char c) {
	if (n == 1) printf("%d from %c to %c\n", n, a, c);
	else {
		hanoi(n-1, a, c, b);
		printf("%d from %c to %c\n", n, a, c);
		hanoi(n-1,b, a, c); 
	}
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int result = pow(2, n) - 1; // 汉诺塔一共要经历2^n-1步骤
	printf("%d\n", result);
	hanoi(n, 'A', 'B', 'C');
}