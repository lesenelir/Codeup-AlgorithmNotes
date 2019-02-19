#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	int a[100];
	int num = 0;
	while (scanf("%d", &n) != EOF) {
		do {
			a[num++] = n % 8;
			n = n / 8;
		} while (n != 0); //商不为0时进行循环
		
		for (int i = num -1; i >= 0; i--) {
			printf("%d", a[i]);
		}
		printf("\n");
	}
}