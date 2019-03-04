#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int a[100][100], b[100][100];
	//输入
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	//逆时针翻转九十度
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			b[i][j] = a[j][3-i];
		}
	}
	//输出
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
}