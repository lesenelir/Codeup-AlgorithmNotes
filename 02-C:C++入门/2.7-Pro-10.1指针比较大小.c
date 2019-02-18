#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b;
	int *p1 = &a, *p2 = &b;
	scanf("%d %d", &a, &b);
	if (*p1 > *p2) {
		printf("%d %d", *p1, *p2);
	} else {
		printf("%d %d", *p2, *p1);
	}
}