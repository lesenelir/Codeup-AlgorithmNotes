#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int z[1001], num = 0;
		do {
			z[num++] = n % 16;
			n = n / 16;
		} while (n != 0);
		
		for (int i = num-1; i >= 0; i--) {
			if (z[i] < 10) {
				printf("%d", z[i]);
			} else {
				printf("%c", z[i] + 'A' - 10); //转字符串+A-10
			}
		}
		printf("\n");
	}
}