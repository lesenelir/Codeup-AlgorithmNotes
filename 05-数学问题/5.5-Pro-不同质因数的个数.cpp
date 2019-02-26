#include <iostream>
#include <cmath>
using namespace std;

const int maxn = 1000;
int prime[maxn], num = 0;
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
			prime[num++] = i;
			p[i] = true;
		}
	}
}

int main(int argc, char *argv[]) {
	int m;
	Find_Prime();
	while (scanf("%d", &m) != EOF) {
		int s = 0;
		int sqr = (int)sqrt(1.0 * m);
		for (int i = 0; i < num && prime[i] <= sqr; i++) {
			if (m % prime[i] == 0) {
				while (m % prime[i] == 0) {
					s++;
					m = m / prime[i];
				}
				num++; // 不同质因子个数加1
			}
			if (m == 1) break;
		}
		if (m != 1) { //如果无法被根号以内的质因子除尽，则一定有大于根号n的质因子
			s++;
		}
		printf("%d\n", s);
	}	
}