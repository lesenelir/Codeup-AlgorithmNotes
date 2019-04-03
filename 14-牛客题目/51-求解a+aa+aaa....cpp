#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

/*
	求解a+aa+aaa+...+a..a(n个a)
	
*/
int main() {
	int a, n;
	while(scanf("%d %d", &a, &n) != EOF) {
		int sum = 0, num = 0;
		for(int i = 1; i <= n; i++) {
			num = num + a * (int)pow(10,i-1);
			sum = sum + num;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}