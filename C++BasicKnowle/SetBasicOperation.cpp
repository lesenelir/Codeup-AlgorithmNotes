#include <iostream>
#include <set>
using namespace std;
/*
	set集合常见使用方法
*/
int main(int argc, char *argv[]) {
	set<int> s; //定义空集合
	s.insert(1); //向集合s插入一个1
	cout << *(s.begin()) << endl; //输出集合的第一个元素(星号表示对指针取指)
	for (int i = 0; i < 6; i++) {
		s.insert(i);   //向集合内插入i
	}
	for (auto it = s.begin(); it != s.end(); it++) { //迭代器遍历集合s中的每一个元素
		cout << *it << " ";
	}
	cout << endl;
	/*查找集合s中的值，若结果等于s.end()表示未找到(因为s.end()表示最后一个元素的下一个位置)*/
	cout << (s.find(2) != s.end()) << endl; 
	cout << (s.find(10) != s.end()) << endl;
	s.erase(1);//删除集合s中的1这个元素
	cout << (s.find(1) != s.end()) << endl; //此时找不到元素1
}

