#include <iostream>
#include <cstring>
using namespace std;

//此程序最后把逆序数的零前导给去除了
int main(int argc, char *argv[]) {
	char str[10001];
	while (scanf("%s", str) != EOF) {
		int a[10001], cnt = 0;
		for (int i = 0; i < strlen(str); i++) {
			a[cnt++] = str[i] - '0';
		}
		//存取正序数字
		int n = 0; 
		for (int i = 0; i < cnt; i++) {
			n = n * 10 + a[i];
		}
		//存取反序数字
		int m = 0; 
		for (int i = cnt-1; i >= 0; i--) {
			m = m * 10 + a[i];
		}
		int k; //倍数
		if (m % n == 0) {
			k = m/n;
			printf("%d*%d=%d\n", n, k, m);	
		} else {
			printf("%d %d\n", n, m);
		}
		
	}
}