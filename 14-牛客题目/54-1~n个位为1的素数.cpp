#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 10001;
int prime[maxn], cnt = 0;
bool p[maxn] = {false};

bool isPrime(int n) {
	if(n <= 1) return false;
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

void find_prime(int n) {
	for(int i = 2; i < n; i++) {
		if(isPrime(i)) {
			prime[cnt++] = i;
			p[i] = true;
		}
	}
}


int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		find_prime(n);
		for(int i = 0; i < cnt; i++) {
			if(prime[i] % 10 == 1) {
				printf("%d ", prime[i]);
			}
		}
		printf("\n");
	}
	
	return 0;
}