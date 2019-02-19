#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		
		for (int j = 0; j < n-i; j++) {
			printf("*");
			if (j < n-i-1) {
				printf(" ");
			}
		}
		
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		printf("\n");
	}
	
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n-1-i; j++) {
			printf(" ");
		}
		
		for (int j = 0; j < 1+i; j++) {
			printf("*");
			if (j < i) {
				printf(" ");
			}
		}
		
		for (int j = 0; j < n-1-i; j++) {
			printf(" ");
		}
		printf("\n");
	}
}