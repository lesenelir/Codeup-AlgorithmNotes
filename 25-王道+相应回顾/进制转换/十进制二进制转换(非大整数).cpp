#include <iostream>

using namespace std;
	
int main(int argc, char *argv[]) {
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF) {
		if (n == 0 && m == 0) break;
		if (m == 2) { //二进制转换十进制
			int sum = 0, bit = 1;
			while (n != 0) {
				sum = sum + (n % 10) * bit;
				n = n / 10;
				bit = bit * 10;
			}
			printf("%d\n", sum);
			
		}
		if (m == 10) { //十进制转换二进制
			int z[1001], num = 0;
			do {
				z[num++] = n % 2;
				n = n / 2;
			} while (n != 0);
			for (int i = num-1; i >= 0; i--) {
				printf("%d", z[i]);
			}
			printf("\n");
		}
		
	}
}