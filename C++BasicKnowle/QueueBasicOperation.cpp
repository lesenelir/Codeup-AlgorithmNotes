#include <iostream>
#include <queue>
using namespace std;
/*
	queue队列常见使用方法
*/
int main(int argc, char *argv[]) {
	queue<int> q; //定义一个空队列q
	for (int i = 0; i < 6; i++) {
		q.push(i); //将i的值依次压入队列q中
	}
	cout << q.front() << " " << q.back() << endl; //访问队列的队首元素和队尾元素
	cout << q.size() << endl;
	q.pop();
	cout << q.front() << endl; //移除元素后重新访问第队首元素
}

