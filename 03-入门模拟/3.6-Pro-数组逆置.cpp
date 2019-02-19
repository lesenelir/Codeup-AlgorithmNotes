#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char *argv[]) {
	char str[200];
	while (gets(str) != NULL) {
		int len = strlen(str);
		for (int i = len -1; i >= 0; i--) {
			putchar(str[i]); // putchar()只能输出一个字符
		}
		printf("\n");
	}
}