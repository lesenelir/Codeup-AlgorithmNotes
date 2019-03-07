#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

struct bign{
	int d[1000]; //数字值
	int len; //结构体长度
	bign() {
		memset(d, 0, sizeof(d));
		len = 0;
	}
};

//低位转换为高位，字符转换为数字
bign change(char str[]) {
	bign a;
	a.len = strlen(str);
	for (int i = 0; i < a.len; i++) {
		a.d[i] = str[a.len-i-1] - '0'; //a中的d数组低位是char数组的高位
	}
	return a;
}

//数组和数字相乘
bign multi(bign a, int b ) {
	bign c;
	int carry = 0;//进位
	for (int i = 0; i < a.len; i ++) {
		int temp = a.d[i] * b + carry;
		c.d[c.len++] = temp % 10;
		carry = temp / 10;
	}
	while (carry != 0) {
		c.d[c.len++] = carry % 10;
		carry = carry / 10;
	}
	return c;
 }

//从高位打印a
void print(bign a) {
	for (int i = a.len-1; i >= 0; i--) {
		printf("%d", a.d[i]);
	}
}

int main() {
	char str[1000];
	while (scanf("%s", str) != EOF) {
		bign a = change(str);
		int n = 0;
		for (int i = 0; i < a.len; i++) {
			n = n + pow(10,i) * a.d[i]; //数组保存1234单个数，此时用10^i * a.d[i]累加算出整数n
		}
		while (n > 1) { //算出阶乘保存在a结构体中，此时a.d[i]遍历就是阶乘的值
			a = multi(a, n-1);
			n--;
		}
		print(a);
	}
	return 0;
}