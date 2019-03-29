#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct bign {
	int d[100];
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

int r; //余数
bign divide(bign a, int b) {
	bign c;
	c.len = a.len;
	for (int i = a.len-1; i >= 0; i--) {
		r = r*10 + a.d[i];
		if (r < b) c.d[i] = 0;
		else {
			c.d[i] = r / b;
			r = r % b;
		}
	}
	while (c.len-1 >= 1 && c.d[c.len-1] == 0) {
		c.len--;
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
		bign c = divide(a, b);
		print(c);		
		
	}
	
	return 0;
}