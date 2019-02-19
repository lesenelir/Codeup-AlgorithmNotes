#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b, d;
	scanf("%d %d %d", &a, &b, &d);
	int sum = a + b;
	int result[30];
	int num = 0;
	do { 							// 进制转换
		result[num++] = sum % d;   
		sum = sum / d;
	} while (sum != 0);
	
	for (int i = num - 1; i >= 0; i--) {
		printf("%d", result[i]);
	}
}