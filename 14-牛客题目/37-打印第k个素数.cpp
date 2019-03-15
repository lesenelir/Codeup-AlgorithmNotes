#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 1000001;
int prime[maxn], cnt = 0;
bool p[maxn] = {false};

bool isPrime(int n) {
	if(n <= 1) return false;
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

void find_prime() { //打印素数表
	for(int i = 1; i < maxn; i++) {
		if(isPrime(i)) {
			prime[cnt++] = i;
			p[i] = true;
		}
	}
}

int main() {
	find_prime();
	int k;
	while(scanf("%d", &k) != EOF) {
		printf("%d\n", prime[k-1]);
	}
	return 0;
}