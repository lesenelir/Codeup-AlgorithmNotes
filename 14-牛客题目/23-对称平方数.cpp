#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
/*
	此题目注重sprintf的使用:
		sprintf(str ,"%d", n):把n以%d的格式读入字符数组str中
	sscanf(str, "%d", n):把str中的内容以%d的格式写入n中
*/
int main() {
	
	for(int i = 1; i < 256; i++) {
		int result = i * i;
		char str[1000];
		sprintf(str, "%d", result);
		int len = strlen(str);
		bool flag = true;
		for(int k = 0; k < len; k++) {
			if(str[k] != str[len-k-1]) {
				flag = false;
			}
		}
		if(flag == true) printf("%d\n", i);
	}

	return 0;
}