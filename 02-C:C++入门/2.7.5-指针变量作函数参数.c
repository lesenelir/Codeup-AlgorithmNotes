#include <stdio.h>

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(int argc, char *argv[]) {
	int a = 1, b = 2;
	int *p1 = &a, *p2 = &b;
	swap(p1, p2);
	printf("a = %d, b = %d", a, b);
}
