#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int maxline = 2 * n + 2;
		for (int i = 0; i < n; i++) {//2I+4表示一行不空的个数
			for (int j = 0; j < maxline-2*i-4; j++) {
				printf(" ");
			}
			
			for (int j = 0; j < 2*i+4; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
}