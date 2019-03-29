#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct bign{
	int d[1001];
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
		a.d[i] = str[a.len-i-1] - '0';
	}
	return a;
}

bign multi(bign a, int b) {
	bign c;
	int carry = 0;
	for (int i = 0; i < a.len; i++) {
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

void print(bign a) {
	for (int i = a.len-1; i >= 0; i--) {
		printf("%d", a.d[i]);
	}
	printf("\n");
}

int main() {
	char str[1001];
	int b;
	while (scanf("%s %d", str, &b) != EOF) {
		bign a = change(str);
		bign c = multi(a, b);
		print(c);
		
	}
	
	
	return 0;
}