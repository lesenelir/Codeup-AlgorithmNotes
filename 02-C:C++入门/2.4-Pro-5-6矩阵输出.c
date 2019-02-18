#include <stdio.h>

int main(int argc, char *argv[]) {
	int i;
	int j;
	int n = 0;
	for (i=1; i<5; i++) {
		for (j=1; j<6; j++) {
			if (n == 5 || n == 10 || n == 15 || n == 20) {
				printf("\n");
			}
			printf("%3d", i*j);
			n++;
		}
	}
}