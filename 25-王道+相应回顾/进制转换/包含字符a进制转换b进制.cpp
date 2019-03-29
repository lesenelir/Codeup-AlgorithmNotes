#include <iostream>
#include <cstring>
using namespace std;

//转换前后的数字都有可能包含字符
int main(int argc, char *argv[]) {
	int a, b; 
	char str[1001];
	while (scanf("%d %s %d", &a, str, &b)) {
		int len = strlen(str);
		int tmp = 0, bit = 1;//tmp保存str的十进制数,bit是进制权重
		for (int i = len-1; i >= 0; i--) {
			int x;
			if (str[i] >= 0 && str[i] <= 9) {
				x = str[i] - '0'; //字符转换数字
			}
			if (str[i] >= 'a' && str[i] <= 'z') {
				x = str[i] - 'a' + 10;//a:10,b:11
			}
			if (str[i] >= 'A' && str[i] <= 'Z') {
				x = str[i] - 'A' + 10;
			}
			tmp = tmp + x * bit;
			bit = bit * a;
		}
		
		char z[1001];
		int num = 0;
		do {
			int x = tmp % b;
			if (x >= 0 && x <= 9) {
				z[num++] = x + '0'; //数字转换成字符
			} else { //x >= 10
				z[num++] = x - 10 + 'A'; //十六进制变成ASCII
			}
			tmp = tmp / b;
		} while (tmp != 0);
		
		for (int i = num-1; i >= 0; i--) {
			printf("%c", z[i]);
		}
		printf("\n");
	}
}