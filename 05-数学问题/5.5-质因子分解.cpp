#include <iostream>
#include <cmath>
using namespace std;

const int maxn = 1000;
int prime[maxn], pNum = 0;
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
			prime[pNum++] = i;
		}
	}
}

struct factor {
	int x, cnt;
}fac[10];

int main(int argc, char *argv[]) {
	Find_Prime();
	int n, num;//num为n的不同质因子的个数
	scanf("%d", &n);
	if (n == 1)	printf("1=1");
	else {
		printf("%d=", n);
		int sqr = (int)sqrt(1.0 * n);// 根号n
		//枚举根号n以内的质因子
		for (int i = 0; i < pNum && prime[i] <= sqr; i++) {
			if (n % prime[i] == 0) {
				fac[num].x = prime[i];
				fac[num].cnt = 0;
				while (n % prime[i] == 0) {
					fac[num].cnt++;
					n = n / prime[i];
				}
				num++;
			}
			if (n == 1) break;
		}
		if (n != 1) { //如果无法被根号以内的质因子除尽，则一定有大于根号n的质因子
			fac[num].x = n;
			fac[num++].cnt = 1;
		}
		//输出
		for (int i = 0; i < num; i++) {
			if (i > 0) printf("*");
			printf("%d", fac[i].x);
			if (fac[i].cnt > 1) {
				printf("^%d", fac[i].cnt);
			}
		}
		
	}
}


