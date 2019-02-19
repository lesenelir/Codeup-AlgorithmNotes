#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	long long a, b;
	long long sum;
	int result[1000];
	int num = 0;
	int m;
	while (scanf("%d %lld %lld", &m, &a, &b) != EOF) {
		if (m == 0) break;
		sum = a + b;
		do {
			result[num++] = sum % m;
			sum = sum / m;
		} while (sum != 0);
		for (int i = num - 1; i >= 0; i--) {
			printf("%d", result[i]);
		}
		printf("\n");
	}
}