#include <stdio.h>

int main(int argc, char *argv[]) {
	int a, b, c;
	int *p1 = &a, *p2 = &b, *p3 = &c;
	scanf("%d %d %d", &a, &b, &c);
	int max, mid, min;
	if (*p1 > *p2) {
		if (*p1 > *p3) {
			max = *p1;
			if (*p2 > *p3) {
				mid = *p2;
				min = *p3;
			} else {
				mid = *p3;
				min = *p2;
			}
		} else {
			max = *p3;
			mid = *p1;
			min = *p2;
		}
	} else {
		if (*p2 > *p3) {
			max = *p2;
			if (*p1 > *p3) {
				mid = *p1;
				min = *p3;
			} else {
				mid = *p3;
				min = *p1;
			}
		} else {
			max = *p3;
			mid = *p2;
			min = *p1;
		}
	}
	printf("%d %d %d", max, mid, min);
}