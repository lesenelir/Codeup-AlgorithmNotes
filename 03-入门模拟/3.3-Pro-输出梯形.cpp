#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]) {
	int h;
	scanf("%d", &h);
	int weight = h;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < 2*h-2*i-1; j++) {
			printf(" ");
		}
		for (int k = 0; k < h+2*i; k++) {
			printf("*");
		}
		printf("\n");
	}
}