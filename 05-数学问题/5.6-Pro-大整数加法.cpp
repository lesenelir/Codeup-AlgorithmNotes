#include <iostream>
#include <cstring>
using namespace std;

struct bign {
	int d[1000];
	int len;
	bign() {
		memset(d, 0, sizeof(d));
		len = 0;
	}	
};

bign change(char str[]) {
	bign a;
	a.len = strlen(str);
	for (int i = 0; i < a.len; i++) {
		a.d[i] = str[a.len - i - 1] - '0';
	}
	return a;
}

bign add(bign a, bign b) {
	bign c;
	int carry = 0;
	for (int i = 0; i < a.len || i < b.len; i++) {
		int temp = a.d[i] + b.d[i]+ carry; //两个对应位与进位相加
		c.d[c.len++] = temp % 10; //个位数为该位结果
		carry = temp / 10;   //十位数为新的进位
	}
	if (carry != 0) { //如果最后进位不为0,则直接赋给结果的最高位
		c.d[c.len++] = carry;
	}
	return c;
}

void print(bign a) {
	for (int i = a.len - 1; i >= 0; i--) {
		printf("%d", a.d[i]);
	}	
}

int main(int argc, char *argv[]) {
	char str1[1000], str2[1000];
	while (scanf("%s %s", str1, str2) != EOF) {
		
		bign a = change(str1);
		bign b = change(str2);
		
		print(add(a, b));
	}
}