#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int maxline = 2*n-1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				printf(" ");
			}
			for (int j = 0; j < maxline - 2*i; j++) {
				if (j == maxline-i-1) {
					printf("*");
				} else {
					printf("* ");
				}
			}
			for (int j = 0; j < i; j++) {
				printf(" ");
			}
			printf("\n");
		}
		
		for (int i = n-2; i >= 0; i--) { //倒数方便计空格数
			for (int j = 0; j < i; j++) {
				printf(" ");
			}
			
			for (int j = 0; j < maxline-2*i; j++) {
				if (j != maxline-i-1) {
					printf("* ");
				}
				if (j == maxline-i-1) {
					printf("*");
				}
			}
			
			for (int j = n-2; j >= 0; j++) {
				printf(" ");
			}
			printf("\n");
		}
		
	}
}