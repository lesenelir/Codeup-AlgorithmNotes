#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[10] = {3, 1, 4, 2, 5};
	int i, j, k;
	int temp;
	for (i = 1; i < 5; i++) {
		for (j = 0; j < 5-i; j++) {
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for (k = 0; k < 5; k++) {
		printf("%d " , a[k]);
	}
}