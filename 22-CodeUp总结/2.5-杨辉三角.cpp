#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[100][100];
		for (int i = 1; i <= n; i++) {
			a[i][1] = 1; //第一列
			a[i][i] = 1; //对角线
		}
		//中间元素
		for (int i = 3; i <= n; i++) {
			for (int j = 2; j < i; j++) {
				a[i][j] = a[i-1][j] + a[i-1][j-1];
			}
		}
		//输出
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}