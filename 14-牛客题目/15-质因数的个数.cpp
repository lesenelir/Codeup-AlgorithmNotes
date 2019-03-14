#include <iostream>
#include <cmath>
using namespace std;

int prime[1000], PNum = 0;
bool p[1000] = {false};

bool isPrime(int n) {
	if(n <= 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void find_prime(int n) {
	for (int i = 1; i <= n; i++) {
		if (isPrime(i)) {
			prime[PNum++] = i;
			p[i] = true;
		}
	}
}

struct factor{
	int x;
	int cnt;
}buf[10];

int PFactor(int n) {
	int num = 0;
	int sqr = (int)sqrt(1.0 * n);
	for (int i = 0; i < PNum && prime[i] <= sqr; i++) {
		if (n % prime[i] == 0) {
			buf[num].x = prime[i];
			buf[num].cnt = 0;
			while (n % prime[i] == 0) {
				buf[num].cnt++;
				n /= prime[i];
			}
			num++;
		}
		if(n == 1) break;
	}
	if (n != 1) {
		buf[num].x = n;
		buf[num].cnt = 1;
	}
	int count = 0;
	for (int i = 0; i < num; i++) {
		count = count + buf[i].cnt;
	}
	return count;
}


int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		find_prime(n);
		int res = PFactor(n);
		printf("%d\n", res);
	}
}