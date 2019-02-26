#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[]) {
	map<string, int> m;
	m["hello"] = 2;
	cout << m["hello"] << endl; // key存在返回该值
	cout << m["world"] << endl; // key不存在返回0
	m["world"] = 3;
	m[","] = 1;
	//键 it->first 值 it->second
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	// 访问map的第一个元素，输出它的键和值
	cout << m.begin()->first << " " << m.begin()->second << endl;
	// 访问map的最后一个元素，输出它的键和值
	cout << m.rbegin()->first << " " << m.rbegin()->second << endl;
	
	cout << m.size() << endl;
}