#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	printf("%d=", n);
	for (int i = 2; i <= n; i++) {
		while (n != i) {
			if (n % i == 0) {
				printf("%d*", i);
				n = n / i;
			}else {
				break;
			}
		}
	}
	printf("%d", n);	
}