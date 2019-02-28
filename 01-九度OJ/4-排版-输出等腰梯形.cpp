#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int m,h;
	scanf("%d", &m);
	scanf("%d", &h);
	while (m > 0) {
		int maxline = 2*h + 2;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < maxline / 2 - i - 1; j++) {
				printf(" ");
			}
			for (int j = maxline / 2 - 2; j < maxline / 2 + 2*i + 2 ; j++) {
				printf("*");
			}
			for (int j = maxline / 2 + i + 1; j < maxline; j++) {
				printf(" ");
			}
			printf("\n");
		}
		m--;
	}
}