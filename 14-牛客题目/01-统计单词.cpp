#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	char str[100];
	while(gets(str) != NULL) {
		int len = strlen(str);
		char ans[100][100]; //二维数组存单词，每个单词存一行
		int r = 0, h = 0;
		for(int i = 0; i < len; i++) {
			if(str[i] == '.') break;
			if(str[i] != ' ') { //输入单词
				ans[r][h++] = str[i];
			} else { 
				ans[r][h] = '\0';
				h = 0;
				r++;
			}
		}
		for(int i = 0; i <= r; i++) {
			string a = ans[i]; //ans[i]存的是一个字符串不是单个字符，所以要用string来存储，不能char temp[]=ans[i]
			printf("%d ",a.size()) ;
		}
		
	}
	return 0;
}