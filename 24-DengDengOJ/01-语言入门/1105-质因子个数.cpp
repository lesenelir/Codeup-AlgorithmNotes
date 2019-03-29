#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	if(n <= 1) return false;
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int find_factor_num(int n) {
	int count = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
			n = n / i;
			count++;
		}
		if(n <= 1) break; // n <= 1 提前结束
	}
	if (n > 1) count++; //n > 1就有一个质因子在sqrt(n)外面
	return count;
}



int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int res = find_factor_num(n);
		printf("%d\n", res);
	}
}