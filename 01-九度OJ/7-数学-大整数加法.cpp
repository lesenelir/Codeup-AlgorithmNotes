#include <iostream>
#include <cstring>
using namespace std;

struct bign {
	int d[1000]; //数组中的每一位存储大整数
	int len;
	bign() {
		memset(d, 0, sizeof(d));
		len = 0;
	}	
};

//将整数(存储在字符数组中)转换为bign
bign change(char str[]) {
	bign a;
	a.len = strlen(str);
	for (int i = 0; i < a.len; i++) {
		a.d[i] = str[a.len-i-1] - '0';
	}
	return a;
}

//高精度a+b
bign add(bign a, bign b) {
	bign c;
	int carry = 0;
	for (int i = 0; i < a.len || i < b.len; i++) {
		int temp = a.d[i] + b.d[i] + carry;
		c.d[c.len++] = temp % 10;
		carry = temp / 10;
	}
	if (carry != 0) {
		c.d[c.len++] = carry;
	}
	return c;
}

//输出
void print(bign a) {
	for (int i = a.len - 1; i >= 0; i--) {
		printf("%d", a.d[i]);
	}
}

int main(int argc, char *argv[]) {
	char str1[1000], str2[1000];
	scanf("%s %s", str1, str2);
	bign a = change(str1);
	bign b = change(str2);
	
	bign c = add(a, b);
	print(c);	
}