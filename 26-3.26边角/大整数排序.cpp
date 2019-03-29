#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct bign {
	int d[1001];
	int len;
	bign() {
		memset(d, 0, sizeof(d));
		len = 0;
	}	
}buf[1001];

bign change(char str[]) {
	bign a;
	a.len = strlen(str);
	for (int i = 0; i < a.len; i++) {
		a.d[i] = str[a.len-i-1] - '0';
	}
	return a;
}

bool cmp(bign a, bign b) {
	if (a.len != b.len) return a.len < b.len;
	else  {
		for (int i = a.len-1; i >= 0; i++) {
			if (a.d[i] != b.d[i]) return a.d[i] < b.d[i];
		}
	}
	return true;
}

void print(bign a) {
	for (int i = a.len-1; i >= 0; i--) {
		printf("%d", a.d[i]);
	}
	printf("\n");
}


int main() {
	int m;
	char str[100001];
	while (scanf("%d", &m) != EOF) {
		for (int i = 0; i < m; i++) {
			scanf("%s", str);
			buf[i] = change(str);
		}
		
		sort(buf, buf+m, cmp);
		for (int i = 0; i < m; i++) {
			print(buf[i]);
		}
	}
	return 0;
}

