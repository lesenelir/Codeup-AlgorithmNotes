#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int maxline = 2 * n + 2;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j < maxline/2-i; j++) {
				printf(" ");
			}
			for (int j = maxline/2-i; j < maxline/2-i+2*i+2; j++) {
				printf("*");
			}
			for (int j = maxline/2-i+2*i+2;j < maxline; j++) {
				printf(" ");
			}
			printf("\n");
		}
	}
}