#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int a[5] = {3, 1, 4, 2, 5};
	memset(a, 0, sizeof(a));
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
//	printf("\n");
}