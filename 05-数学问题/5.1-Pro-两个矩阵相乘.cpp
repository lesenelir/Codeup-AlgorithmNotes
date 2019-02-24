#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int a[2][3] = {0}, b[3][2] = {0}, c[2][2] = {0};
	//输入a数组
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	//输入b数组
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	//运算
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 3; k++) { //内标
				c[i][j] = c[i][j] + a[i][k] * b[k][i];
			}
		}
	}
	//输出
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d", c[i][j]);
			if (j < 2) printf(" "); //每列空一格
		}
		printf("\n");
	}
}