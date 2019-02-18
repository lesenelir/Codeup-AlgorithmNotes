#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int a[n][n];
	// 杨辉三角第一列和对角线元素全部置为1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			a[i][0] = 1;
			a[i][i] = 1;
		}
	}
	// 杨辉三角计算中间元素,中间元素从第三行第二列开始
	for (int i = 2; i < n; i++) {
		for (int j = 1; j <= i - 1 ; j++) {
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	// 遍历输出，对角线j <= i
	for(int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
