#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	char str[1010];
	while(gets(str) != NULL) {
		int len = strlen(str);
		char ans[101][101];
		int r = 0, h = 0;
		for(int i = 0; i < len; i++) {
			if (str[i] != ' ') {
				ans[r][h++] = str[i];
			} else {
				ans[r][h] = '\0';
				h = 0;
				r++;
			}
		}
		//转换大写
		for(int i = 0; i <= r; i++) { //不要遗漏等号
			ans[i][0] = ans[i][0] - 32;
		}
		
		for(int i = 0; i <= r; i++) {
			printf("%s ", ans[i]);
		}
		
		printf("\n");	
		
		
	}
	
	return 0;
}