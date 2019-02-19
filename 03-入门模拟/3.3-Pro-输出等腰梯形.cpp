#include <iostream>

using namespace std;
// 绘制图形都是把它们看作是一个矩形然后绘制
int main(int argc, char *argv[]) {
	int h;
	scanf("%d", &h);
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < h-i-1; j++) {
			printf(" ");
		}
		
		for (int j = 0; j < h+2*i; j++) {
			printf("*");
		}
		
		for (int j = 0; j < h-i-1; j++) {
			printf(" ");
		}
		
		printf("\n");
	}
}