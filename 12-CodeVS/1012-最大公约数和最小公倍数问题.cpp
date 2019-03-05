#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}


int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}

int main(int argc, char *argv[]) {
	int x, y;
	while (scanf("%d %d", &x, &y) != EOF) {
		int count = 0;
		//暴力枚举
		for (int p = x; p <= y; p++) {
			for (int q = x; q<= y; q++) {
				if (x == gcd(p, q) && y == lcm(p, q)) {
					count++;
				}
			}
		}
		printf("%d", count);
	}
}