#include <iostream>

using namespace std;

//100000583
int Fibonacci(int n) {
	if(n == 0) return 0;
	else if (n == 1) return 1;
	else return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(int argc, char *argv[]) {
	int m;
	while (scanf("%d", &m) != EOF) {
		while (m != 0) {
			int n;
			scanf("%d", &n);
			int maxline = 2*n-1;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < maxline/2-i; j++) {
					printf(" ");
				}
//				for (int j = maxline/2-i; j <= maxline/2+i; j++) {
//					int res = Fibonacci(j);
//					printf("%d ", res);
//				}
				for (int j = 0; j < 2*(i+1)-1;j++) {
					int res = Fibonacci(j);
					printf("%d ", res);
				}
				for (int j = 0; j < maxline/2-i; j++) {
					printf(" ");
				}
				printf("\n");
			}
			
			m--;
		}
	}
}