#include <iostream>

using namespace std;

const int maxn = 1000;
int prime[maxn], cnt = 0;
bool p[maxn] = {false};

bool isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void Find_Prime() {
	for (int i = 1; i < maxn; i++) {
		if (isPrime(i) == true) {
			prime[cnt++] = i;
			p[i] = true;
		}
	}
}


int main(int argc, char *argv[]) {
	int m, n, count = 0;
	scanf("%d %d", &m, &n);
	Find_Prime();
	for (int i = m; i <= n; i++) {
		printf("%d", prime[i-1]);
		count++;
		if (count % 10 != 0 ) {
			printf(" ");
		} else {
			printf("\n");
		}
	}
	
}