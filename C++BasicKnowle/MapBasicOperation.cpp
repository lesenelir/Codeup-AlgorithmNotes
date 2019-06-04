#include <iostream>
#include <map>
using namespace std;
/*
	map键值对常见使用方法
*/
int main(int argc, char *argv[]) {
	map<string, int> m; //空的map m,键是string类型,值是int类型
	m["hello"] = 2; //将key为"hello"，value为2的键值对(key-value)存入map中
	cout << m["hello"] << endl; //访问键值对中的value值，若key不存在则返回0
	cout << m["miaomiao"] << endl;
	m["miaomiao"] = 3; //键值对，键为miaomiao，值为3
	m[","] = 1;
	/*迭代器遍历输出map所有的元素，键用it->first获得,值用it->second获得*/
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	/*访问map中的第一个元素，输出它的键和值*/
	cout << m.begin()->first << " " << m.begin()->second << endl; //first是键，second是值
	/*访问map中的最后一个元素，输出它的键和值*/
	cout << m.rbegin()->first << " " << m.rbegin()->second << endl;
	/*输出map当中的元素个数*/
	cout << m.size() << endl;
}


