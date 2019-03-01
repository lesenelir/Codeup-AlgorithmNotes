#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int buf[40] = {0};
		int num = 0;
		do {
			buf[num++] = n % 2;
			n = n / 2;
		} while (n != 0);
		for (int i = num - 1; i >= 0; i--) {
			printf("%d", buf[i]);
		}
		printf("\n");
	}
}