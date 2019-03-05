#include <iostream>

using namespace std;


int main(int argc, char *argv[]) {
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF) {
		if (n == 0 && m == 0) break;
		if (m == 10) {
			//十进制处理成二进制
			int a[100], num = 0;
			do {
				a[num++] = n % 2;
				n = n / 2;
			} while (n != 0);
			//输出
			for (int i = num - 1; i >= 0; i--) {
				printf("%d", a[i]);
			}
			printf("\n");
		} else if (m == 2) {
			//二进制处理成十进制
			int sum = 0, product = 1;
			while (n != 0) {
				sum = sum + (n % 10) * product;
				n = n / 10;
				product = product * 2;
			}
			printf("%d\n", sum);
		}
	}		
}