#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main(int argc, char *argv[]) {
	int a, b;
	while (scanf("%d %d", &a, &b)) {
		int result = gcd(a, b);
		printf("%d", result);
	}	
}