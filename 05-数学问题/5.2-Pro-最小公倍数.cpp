#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main(int argc, char *argv[]) {
	int m, d;
	scanf("%d", &m);
	int a[100];
	while (m != 0) {
		int n, i;
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (i = 1; i < n; i++) {
			d = gcd(a[i-1], a[i]);    // d = gcd(a, b
			a[i] = a[i-1] / d * a[i]; // x = a / d * b
		}
		printf("%d\n", a[i-1]);
		m--;
	}
}