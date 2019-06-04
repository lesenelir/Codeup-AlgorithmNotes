#include <iostream>
using namespace std;
/*
	string类常见使用方法
*/
int main(int argc, char *argv[]) {
	string s1 = "hello miaomiao"; //字符串赋值
	cout << s1 << endl;
	string s2 = s1;
	string s3 = s1 + s2;   //字符串拼接
	cout << s3 << endl;
	string s4;
	cin >> s4; //cin读入字符串不能包括空格，读入字符串是以空格为分隔符
	cout << s4.length() << endl;
	cout << s4 << endl; //输出字符串
	string s;
	getline(cin,s); //读取一行字符串包括空格
	cout << s.length() << endl;
}

