#include <iostream>
using namespace std;
/*
	sort中自定义cmp函数常见使用方法
*/
typedef struct stu {
	int number;
	int score;
}stu;
bool cmp1(stu a, stu b) {
	if (a.score != b.score) {
		return a.score > b.score;
	} else {
		return a.number < b.number;
	}
}
bool cmp2(stu a, stu b) { //三目运算符
	return a.score != b.socre ? a.score > b.score : a.number < b.number;
}

int main(int argc, char *argv[]) {
	
}