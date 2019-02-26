#include <iostream>
#include <cstring>
using namespace std;

struct bign {
	int d[1000]; //d数组存放大整数
	int len;
	bign() {
		memset(d, 0, sizeof(d));
		len = 0;
	}
};

//将整数转换为bign
bign change(char str[]) {
	bign a;
	a.len = strlen(str);
	for (int i = 0; i < a.len; i++) {
		a.d[i] = str[a.len - i - 1] - '0';
	}
	return a;
}

//高精度a+b
bign add(bign a, bign b) {
	bign c;
	int carry = 0; //carry是进位
	for (int i = 0; i < a.len || i < b.len; i++) {
		int temp = a.d[i] + b.d[i] + carry;
		c.d[c.len++] = temp % 10; //"%"-> "取",个位数是该位数结尾
		carry = temp / 10;        //"/"-> "去", 十位数是新的进位
	}
	if (carry != 0) {       //如果最后进位不为0，则直接赋值给结果的最高位
		c.d[c.len++] = carry;
	}
	return c;
}

//高精度a-b
bign sub(bign a, bign b) {
	bign c;
	for (int i = 0; i < a.len || i < b.len; i++) {
		if (a.d[i] < b.d[i]) { //如果不够减
			a.d[i + 1]--; //向高位进位
			a.d[i] = a.d[i] + 10; //当前位加10
		}
		c.d[c.len++] = a.d[i] - b.d[i];
	}
	while (c.len - 1 >= 1 && c.d[c.len - 1] == 0) {
		c.len--; //去除高位的0，同时至少保留一位最低位
	}
	return c;
}

//输出bign,输出高位到低位，所以要从末尾开始输出
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
	
	print(add(a, b));
	
	printf("\n");

	print(sub(a, b));
}
