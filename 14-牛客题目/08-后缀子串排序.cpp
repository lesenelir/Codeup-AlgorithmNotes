#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct poi{
	char s[1000];
}buf[1000];

bool cmp(poi a, poi b) {
	int i = strcmp(a.s, b.s);
	if(i < 0) return 0 < 1;
	else return 0 > 1;
}

int main() {
	char str[100];
	while(scanf("%s", str) != EOF) {
		int len = strlen(str);
		for(int i = 0; i < len; i++) {
			int num = 0;
			for(int j = i; j < len; j++) {
				buf[i].s[num++] = str[j];
			}
		}
		sort(buf, buf+len, cmp);
		for(int i = 0; i < len; i++) {
			printf("%s\n", buf[i].s);
		}
	}
	return 0;
}