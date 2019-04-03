#include <iostream>
#include <cmath>
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


void find_prime(int n) {
	for (int i = 1; i <= n; i++) {
		int res = (int)pow(2.0, i) - 1;	
		if (isprime(res) ) {
			prime[cnt++] = res;
			p[res] = true;
		}
	}
}


int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {	
		find_prime(n);
		if (cnt == 0) {
			printf("None");
		} else {
			for (int i = 0; i < cnt; i++) {
				printf("%d\n", prime[i]);
			}
		}
	}
}