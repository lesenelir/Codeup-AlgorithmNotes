#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main(int argc, char *argv[]) {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		int d = 0, result = 0;
		d = gcd(a, b);
		result = a / d * b; 
		printf("%d", result);
	}
}