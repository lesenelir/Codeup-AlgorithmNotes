#include <iostream>
#include <stack>
using namespace std;
/*
	stack栈常见使用方法
*/
int main(int argc, char *argv[]) {
	stack<int> s; //定义一个空栈
	for (int i = 0; i < 6; i++) {
		s.push(i); //将元素i压入栈s中
	}
	cout << s.top() << endl;
	cout << s.size() << endl;
	s.pop(); //移除栈顶元素
	cout << s.top() << endl;
}

