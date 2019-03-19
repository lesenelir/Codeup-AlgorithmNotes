#include <iostream>

using namespace std;

const int maxn = 1001;
int prime[maxn], cnt = 0;
bool p[maxn] = {false};

bool isPrime(int n) {
	if(n <= 1) return false;
	for (int i = 2; i*i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

void find_prime(int n) {
	for (int i = 1; i <= n; i++) {
		if (isPrime(i)) {
			prime[cnt++] = i;
			p[i] = true;
		}
	}
}


int main(int argc, char *argv[]) {
	int k = 100;
	find_prime(k);
	int sum = 0;
	for (int i = 0; i < cnt; i++) {
		sum = sum + prime[i];
	}	
	printf("%d\n", sum);
}