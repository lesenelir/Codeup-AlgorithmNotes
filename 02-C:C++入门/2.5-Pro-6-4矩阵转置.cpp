#include <cstdio>

int main(int argc, char *argv[]) {
	int a[2][3], b[3][2];
	// 输入元素
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	// 给矩阵b赋值
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			b[i][j] = a[j][i];
		}
	}
	// 输出矩阵b
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
}