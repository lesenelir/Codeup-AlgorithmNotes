#include <iostream>

using namespace std;

//P进制数x转换为十进制数y
//void system_conver(int x, int p) {
//	int y = 0, product = 1;
//	while (x != 0) {
//		y = y + (x % 10) * product;
//		x = x / 10;
//		product = product * p;
//	}
//}

//P进制数x转换为十进制数y
int system_conver(int x) {
	int y = 0, product = 1;
	while (x != 0) {
		y = y + (x % 10) * product;
		x = x / 10;
		product = product * 2; //此处2是代表2进制数
	}
	return y;
}


int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int result = system_conver(n);
		printf("%d", result);
	}
}