#include <iostream>

using namespace std;

const int maxn = 1001;
int prime[maxn], cnt = 0;
bool p[maxn] = {false};

bool isprime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void find_prime() {
	for (int i = 1; i< maxn; i++) {
		if (isprime(i)) {
			prime[cnt++] = i;
			p[i] = true;
		}
	}
}

int main(int argc, char *argv[]) {
	int m, n;
	while (scanf("%d %d", &m, &n) != EOF) {
		find_prime();
		int count = 0;
		for (int i = m-1; i <= n-1; i++) { //第m个到第n个素数
			printf("%d ", prime[i]);
			count++;
			if (count == 10) {
				printf("\n");
				count = 0; //重新给count赋值
			}
		}
	}	
}