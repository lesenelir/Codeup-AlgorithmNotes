#include <iostream>
#include <string>
using namespace std;
/*
	to_string常见使用方法
*/
int main(int argc, char *argv[]) {
	string s1 = to_string(1234); //整数转为字符串
	cout << s1 << endl;
	string s2 = to_string(5.6); //浮点数转为字符串
	cout << s2 << endl;
	cout << s1 + s2 << endl;   //字符串拼接
	printf("%s\n", (s1 + s2).c_str()); //printf输出string.要加一个".c_str()"
}

