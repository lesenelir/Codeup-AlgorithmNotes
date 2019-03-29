#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) return false;
	for(int i = 2; i*i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

int count_function(int n) {
	int count = 0;
	for(int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0 && isPrime(i)) {
			count++;
		}
	}
	return count;
}


int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		int res = count_function(n);
		printf("%d\n", res);
	}
	
	return 0;
}