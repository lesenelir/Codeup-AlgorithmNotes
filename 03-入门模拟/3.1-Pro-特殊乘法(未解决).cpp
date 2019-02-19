#include <cstdio>

/**
int CalDigit(int n) {
	int count = 1;
	while (n >= 10) {
		count++;
		n = n / 10;
	}
	return count;
}
*/

int main(int argc, char *argv[]) {
	int a, b;
	int aa, bb;
	int tempb;
	int sum = 0;
	while (scanf("%d %d", &a, &b) != EOF) {
		tempb = b;  	//必须取零时变量值保存b的值
		while (a != 0) {
			aa = a % 10;
			tempb = b;  //循环会改变b的值所有必须在改变a的值之前保存b的值
			while (tempb != 0) {
				bb = tempb % 10;
				sum = sum + aa * bb;
				tempb = tempb / 10;
			}
			a = a / 10;
		}
		printf("%d", sum);
	}
}