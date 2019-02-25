#include <iostream>

using namespace std;

int add(int n) {
	int sum = 0;
	for (int i = n; i <= 2*n; i++) {
		sum = sum + i;
	}
	return sum;
}

int main(int argc, char *argv[]) {
	int m, n;
	scanf("%d", &m);
	int a[100];
	while (m != 0) {
		int sum = 0;
		scanf("%d", &n);
		if (n < 0) {
			sum = add(-n);
			printf("-%d\n", sum);
		} else {
			sum = add(n);
			printf("%d\n", sum);
		}
		m--;
	}
}