#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		int buf1[1000], buf2[1000];
		int size1 = 0, size2 = 0;
		//数位拆解基本上用循环 求余取模
		while (a != 0) {
			buf1[size1++] = a % 10;
			a = a / 10;
		}
		while (b != 0) {
			buf2[size2++] = b % 10;
			b = b / 10;
		}
		
		int result = 0;
		for (int i = 0; i < size1; i++) {
			for (int j = 0; j < size2; j++) {
				result = result + buf1[i] * buf2[j];
			}
		}
		printf("%d", result);
	}
}