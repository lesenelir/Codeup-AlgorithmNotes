#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(int argc, char *argv[]) {
	char str[1000];
	while (scanf("%s", str) != EOF) {
		int n = strlen(str);
		//注：此处注意区别sort()和reverse()两个函数
		sort(str, str+n);
		//输出字符串
		puts(str); 
	}
}