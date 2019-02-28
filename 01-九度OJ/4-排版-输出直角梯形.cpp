#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int h;
	while (scanf("%d", &h) != EOF) {
		//最后一行要输出的星号是h+2(h-1)
		int maxline = h + 2 * (h - 1);
		for (int i = 0; i < h; i++) { //i行
			for (int j = 0; j < maxline - h-2*(i-1)-2; j++) {
				printf(" ");
			}
			for (int k = maxline - h-2*(i-1)-2; k < maxline; k++) {
				printf("*");
			}
			printf("\n");
		}
	}
}