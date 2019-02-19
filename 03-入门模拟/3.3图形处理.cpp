#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]) {
	int col;
	char c;
	scanf("%d %c", &col, &c);
	int row = col / 2 + col % 2;
	// 第一行
	for (int i = 0; i < col; i++) {
		printf("%c", c);
	}
	printf("\n");
	// 第2行到n-1行, 第2列到n-1列
	for (int i = 1; i < row - 1; i++) {
		printf("%c", c);
		for (int j = 1; j < col - 1; j++) {
			printf("%s", " ");
		}
		printf("%c\n", c);
	}
	// 第n行
	for (int i = 0; i < col; i++) {
		printf("%c", c);
	}
}