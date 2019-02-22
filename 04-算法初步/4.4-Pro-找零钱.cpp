#include <iostream>

using namespace std;

int money[5] = {50, 20, 10, 5, 1};

int main(int argc, char *argv[]) {
	int m, x;
	while (scanf("%d", &m) != EOF) {
		for (int i = 0; i < 5; i++) {
			x = m / money[i];
			if (x != 0) {
				printf("%d*%d", money[i], x);
				m = m % money[i];
				if (m != 0) {
					printf("+");
				}
			} 
		}
		printf("\n");
	}
}