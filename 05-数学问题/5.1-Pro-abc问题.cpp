#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int a, b, c;
	//a,b不能为0所以要从1开始计数
	for (int a = 1; a < 10; a++) {
		for (int b = 1; b < 10; b++) {
			for (int c = 0; c < 10; c++) {
				if (a*100+b*10+c+b*100+c*10+c == 532) {
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}
}