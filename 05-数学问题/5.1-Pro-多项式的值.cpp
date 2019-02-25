#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]) {
	int m, n;
	scanf("%d", &m);
	while (m != 0) {
		scanf("%d", &n);
		int c[11] = {0}; //保留系数
		for (int i = 0; i < n+1; i++) {
			scanf("%d", &c[i]);
		}
		int x;
		scanf("%d", &x);
		int sum = 0;
		for (int i = 0; i < n+1; i++) {
			sum = sum + c[i]*pow(x, i); //pow(x, y)计算x的y次幂
		}
		printf("%d\n", sum);
		m--;
	}
}