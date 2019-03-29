#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct bign{
	int d[100];
	int len;
	bign() {
		len = 0;
		memset(d, 0, sizeof(d));
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

int compare(bign a, bign b) {
	if (a.len > b.len) return 1;
	else if (a.len < b.len) return -1;
	else {
		for (int i = a.len-1; i >= 0; i++) {
			if (a.d[i] > b.d[i]) return 1;
			else if (a.d[i] < b.d[i]) return -1;
		}
		return 0;//相等
	}
}


bign sub(bign a, bign b) {
	bign c;
	for (int i = 0; i < a.len || i < b.len; i++) {
		if (a.d[i] < b.d[i]) {
			a.d[i+1]--;
			a.d[i] += 10;
		}
		c.d[c.len++] = a.d[i] - b.d[i];
	}
	while (c.len-1 >= 1 && c.d[c.len-1] == 0) { //最高位为零，结果至少保留一位
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
	char str1[1001], str2[1001];
	while (scanf("%s %s", str1, str2) != EOF) {
		bign a = change(str1);
		bign b = change(str2);
		int cmp = compare(a, b);
		bign c;
		if (cmp == 1) {
			c = sub(a, b);
			print(c);
		} else if (cmp == -1) {
			c = sub(b, a);
			printf("-");
			print(c);
		} else {
			printf("0\n");
		}
		
	}
	
	return 0;
}