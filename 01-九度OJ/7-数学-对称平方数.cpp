#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	for (int i = 0; i < 256; i++) {
		int temp = i * i;
//		int buf[100] = {0};
//		int n = 0;
		int reverse = 0;
		//求翻转数
		while (temp != 0) {
		//	buf[n++]= temp % 10;
			reverse = reverse * 10 + temp % 10;
			temp = temp / 10;
		}
		if (i * i == reverse) {
			printf("%d\n", i);
		}
//		for (int j = 0; j < n / 2; j++) {
//			if (buf[j] == buf[n-j-1]) {
//				printf("%d\n", buf[j]);
//			}
//		}
	}
}