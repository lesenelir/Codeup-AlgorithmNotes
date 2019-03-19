#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[5] = {50, 20, 10, 5, 1};
		//b数组表示与a数组对应下标相同的票数,且b数组一定要赋初始值
		int b[5] = {0}; 
		for (int i = 0; i < 5; i++) {
			if (n >= a[i]) {
				b[i] = n / a[i];
				n = n % a[i];
			}
		}
		for (int i = 0; i < 5; i++) {
			if (b[i] != 0) {
				printf("%d*%d+", a[i], b[i]);
			}
		}
		printf("\b"); //退格符，目的在于去掉最后一个加号
		printf("\n");
	}
}