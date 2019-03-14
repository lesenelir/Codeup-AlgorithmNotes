#include <iostream>
#include <cstring>
using namespace std;
/*
	拿2位数举例，第一位除以2得到商A1余数B1，然后第二位数+A1*10一起除以2得到商A2余数B2.
	最后留下的余数B2就是二进制中的最高位，得到的两个商A1和A2再组合一个新数，继续上述操作，最后将结果倒序输出。
*/

int main(int argc, char *argv[]) {
	char str[10001];
	while (scanf("%s", str) != EOF) {
		int len = strlen(str);
		int a[100];
		//字符数组赋给整型数组
		for (int i = 0; i < len; i++) {
			a[i] = str[i] - '0';
		}
		//进行二进制转变
		int res[10001], cnt = 0;
		while (true) {
			for (int i = 0; i < len; i++) {
				if (i == len-1) {
					res[cnt++] = a[i] % 2; //存取最后一位余数
				} else {
					a[i+1] = a[i+1] + (a[i]%2) * 10;//
				}
				a[i] = a[i] / 2;
			}
			int count = 0; 
			for (int i = 0; i < len; i++) {
				if (a[i] == 0) count++;
			}
			if (count == len) break; //全部为0则转换完成
		}
		//输出
		for (int i = cnt-1; i >= 0; i--) {
			printf("%d", res[i]);
		}
		printf("\n");
	}
}