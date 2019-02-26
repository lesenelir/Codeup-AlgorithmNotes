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

void Find_Prime(int n) { //注意：此处有参数int n,代表要输入的整数范围
	for (int i = 1; i < n; i++) {
		if (isPrime(i) == true) {
			prime[cnt++] = i;
			p[i] = true;
		}
	}
}

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {			
		Find_Prime(n);
		if (cnt > 0) {
			for (int i = 0; i < cnt; i++) {
				if (prime[i] % 10 == 1) {
					printf("%d ", prime[i]);
				}
			}
		} else {
			printf("%d", -1);
		}
	}	
}