#include <iostream>

using namespace std;

const int n = 3;

int main(int argc, char *argv[]) {
	int a[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
//	int b[100][100];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			b[i][j] = a[j][i];
//		}
//	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
	
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//printf("%d ", b[i][j]);
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
}