#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int m;
	while (scanf("%d", &m) != EOF) {
		int result = m * m;
		while (m != 0) {
			if (result % 10 != m % 10) {
				printf("NO!\n");
				break;
			}
			result = result / 10;
			m = m / 10;
		}
		if (m == 0) {
			printf("YES!\n");
		}
	}
}