#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	char str[1001];
	while(gets(str) != NULL) {
		int len = strlen(str), r = 0, h = 0;
		char ans[100][100];
		for(int i = 0; i < len; i++) {
			if(str[i] != ' ') {
				ans[r][h++] = str[i];
			} else {
				ans[r][h] = '\0'; //一个单词来到结尾
				r++;
				h = 0;
			}
		}
		char a[101], b[101];
		gets(a);
		gets(b);
		
		for(int i = 0; i <= r; i++) { //此处包含等于号
			if(strcmp(ans[i], a) == 0) {
				strcpy(ans[i], b);
			}
		}
		
		for(int i = 0; i <= r; i++) {
			printf("%s", ans[i]);
			if (i >= 0) printf(" "); //每输出一个单词，并且输出一个空格
		}
	}
	return 0;
}