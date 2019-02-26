#include <iostream>

using namespace std;

const int maxn = 100;
int prime[maxn], cnt = 0;
bool p[maxn] = {0};

bool isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

//求素数表
void Find_Prime() {
	for (int i = 1; i < maxn; i++) {
		if (isPrime(i) == true) {
			prime[cnt++] = i;
			p[i] = true;
		}
	}
}

int main(int argc, char *argv[]) {
	Find_Prime();
	for(int i = 0; i < cnt; i++) {
		printf("%d ", prime[i]);
	}	
}