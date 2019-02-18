#include <stdio.h>

int main(int argc, char *argv[]) {
	int temp1 = 1, temp2 = 1, temp3;
	int n;
	int i;
	scanf("%d", &n);
	if (n <= 2) {
		printf("%d\n", 1);
	} else if (n > 3) {
		for (i = 1; i <= n-2; i++) {
			temp3 = temp1 + temp2;
			temp1 = temp2;
			temp2 = temp3;
		}
		printf("%d\n", temp3);
	}
}