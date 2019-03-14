#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int prime[1000], PNum = 0;
bool p[100] = {false};

bool isPrime(int n) {
	if(n <= 1) return false;
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

//素数表
void find_prime(int n) {
	for(int i = 1; i < n; i++) {
		if(isPrime(i) == true) {
			prime[PNum++] = i;
			p[i] = true;
		}
	}
}

//分解质因数子
struct factor {
	int x;
	int cnt;
}buf[10];

int pFactor(int n) {
	int num = 0;
	int sqr = (int)sqrt(1.0*n);
	for (int i = 0; i < PNum && prime[i] <= sqr; i++) {
		if (n % prime[i] == 0) { //prime[i]是n的因子
			buf[num].x = prime[i]; //记录该因子
			buf[num].cnt = 0;
			while (n % prime[i] == 0) { //计算出质因子prime[i]的个数
				buf[num].cnt++;
				n /= prime[i];
			}
			num++;//不同质因子个数加一
		}
		if(n == 1) break;
	}
	if (n != 1) { //如果无法被根号N以内的质因子除尽，则一定有大于根号n的质因子
		buf[num].x = n;
		buf[num++].cnt = 1;
	}
	//以上为分解质因数模版，以下是此题目特有的步骤
	int count = 0;
	for (int i = 0; i < num; i++) {
		count = count + buf[i].cnt;
	}
	return count;
}

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		find_prime(n);
		int res = pFactor(n);
		printf("%d\n", res);
	}
	return 0;
}