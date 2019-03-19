#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int m;
	while (scanf("%d", &m) != EOF) {
		while (m--) {
			int n;
			scanf("%d", &n);
			int maxline = 2*n+2;
			for (int i = 0; i < n; i++) {//maxline-2*i-4是一行空格数
				for (int j = 0; j < (maxline-2*i-4)/2; j++) {
					printf(" ");
				}
				
				for (int j = 0; j < 2*i+4; j++) { //2*+4是一行非空格数
					printf("*");
				}
				
				for (int j = 0; j < (maxline-2*i-4)/2; j++) {
					printf(" ");
				}
				printf("\n");
			}	
		}
	}
}