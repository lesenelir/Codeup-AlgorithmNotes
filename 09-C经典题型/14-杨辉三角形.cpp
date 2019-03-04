#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int a[n][n];
	//第一列元素
	for (int i = 0; i < n; i++) {
		a[i][0] = 1;
	}
	//对角线元素
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			a[i][i] = 1;
		}
	}
	//中间元素
	for (int i = 2; i < n; i++) {
		for (int j = 1; j< i ; j++) {
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	
	//输出
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}