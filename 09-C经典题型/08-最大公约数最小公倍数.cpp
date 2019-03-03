#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if(b == 0) return a;
	else return gcd(b, a % b);
}

int main(int argc, char *argv[]) {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		int d;
		d = gcd(a, b);
		int result;
		result = a / d * b;
		printf("最大公约数:%d\n", d);
		printf("最小公倍数:%d\n",result);
		
	}
}