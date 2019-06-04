#include <iostream>
#include <vector>
using namespace std;
/*
	vector动态数组常见使用方法
*/
int main(int argc, char *argv[]) {
	/*定义时不指定vector的大小*/
	vector<int> v1;          
	cout << v1.size() << endl;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i); 
	}
	cout << v1.size() << endl; 
	v1.resize(8);              //resize()函数为重新改变数组大小
	cout << v1.size() << endl;
	
	/*定义的时候指定vector大小	默认里面元素值全为0*/
	vector<int> v2(15);  
	cout << v2.size() << endl;
	for (int i = 0; i < v2.size(); i++) { //将vector动态数组v2全部赋值
		v2[i] = 15;
	}
	for (int i = 0; i < v2.size(); i++) { //遍历输出动态数组v2
		cout << v2[i] << " ";
	}
	cout << endl;
	
	/*定义vector大小为20并把所有元素置为18*/
	vector<int> v3(20,18); 
	for (int i = 0; i < v3.size(); i++) { //遍历输出动态数组v3
		cout << v3[i] << " ";
	}
	cout << endl;
	for (auto it = v3.begin(); it != v3.end(); it++) { //使用迭代器访问遍历动态数组
		cout << *it << " ";
	}
	
}

