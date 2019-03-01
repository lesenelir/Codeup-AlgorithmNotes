#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int result = n * n;
		while (n != 0) {
			if (n % 10 != result % 10) {
				printf("NO\n");
				break;
			}
			n = n / 10;
			result = result / 10;
		}
		if (n == 0) {
			printf("YES\n");
		}
	}
}