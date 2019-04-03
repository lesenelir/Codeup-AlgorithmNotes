#include <iostream>
#include <cstdio>
using namespace std;

int gcd(int a, int b) {
	if(b == 0) return a;
	else return gcd(b, a%b);
}

/*
	非递归版本：
	int gcd(int a, int b) {
		while(b != 0) {
			int temp = a % b;
			a = b;
			b = temp;
		}
	}
*/

int main() {
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF) {
		int res = gcd(a, b);
		printf("%d\n", res);
	}
	
	return 0;
}