#include <iostream>
#include <cstdio>
using namespace std;

int a[100][100], b[100][100], c[100][100];

int main() {
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 2; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			c[i][j] = 0; //控制c[i][j]位置的值
			for(int k = 0; k < 3; k++) { //内标
				c[i][j] = c[i][j] + a[i][k]*b[k][j];
			}
		}
	}
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}