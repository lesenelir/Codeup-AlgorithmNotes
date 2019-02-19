#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {
	char str[90];
	gets(str);
	int r = 0, h = 0;
	int len = strlen(str);
	char result[90][90];      		 //result[0] ~ result[r]存放单词 
	for (int i = 0; i < len; i++) {
		if (str[i] != ' ') {
			result[r][h++] = str[i]; //不是空格，存放至result[r][h],并令h++
		} else {					 //是空格，单词结束，r加1，h恢复至0
			result[r][h] = '\0';	 //
			r++;
			h = 0;
		}
	}
	//输出
	for (int i = r; i >= 0; i--) {
		printf("%s ", result[i]);
	}
}