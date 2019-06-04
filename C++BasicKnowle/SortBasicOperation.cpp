#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	sort函数常见使用方法，调用sort要引入头文件#include<algorithm>
*/
bool cmp(int a, int b) {   //指定第三个参数cmp的函数
	return a > b;
}
int main(int argc, char *argv[]) {
	vector<int> v(10); //指定动态数组大小10，默认元素全为0
	for (int i = 0; i < 10; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end()); //未传入参数cmp，所以按照默认，v从小到大排序
	for (int i = 0; i < v.size(); i++) { //遍历输出数组
		cout << v[i] << " ";
	}
	cout << endl;
	
	int array[10];
	for (int i = 0;i < 10; i++) {
		cin >> array[i];
	}
	/*array从大到小排序，因为cmp函数排序规则设置了从大到小*/
	sort(array, array + 10, cmp); //array表示数组首地址，array+n(此处array+10)表示尾地址
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

