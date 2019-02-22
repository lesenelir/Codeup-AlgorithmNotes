#include <iostream>

using namespace std;
int Fibonacci(int n) {
	if (n == 1) return 1;
	else if (n == 0) return 0;
	else return Fibonacci(n-1) + Fibonacci(n-2);
}
int main(int argc, char *argv[]) {
	int m;
	scanf("%d", &m);
	while (m != 0) {
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 2*(n-i-1); j++) {
				printf(" ");
			}
			for (int k = 0; k < 2*(i+1)-1; k++) {
				printf("%d", Fibonacci(k));
				if (k < 2*(i+1)-1) printf(" ");
			}
			printf("\n");
		}
		m--;
	}
	
}