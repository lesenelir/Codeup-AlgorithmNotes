#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool isprime(int n) {
	if(n <= 1) return false;
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int find_max_factor(int n) {
	int res = 0;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0 && isprime(i) && i > res) {
			res = i;
		}
	}
	return res;
}

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int result = find_max_factor(n);
		printf("%d\n", result);
	}
}
