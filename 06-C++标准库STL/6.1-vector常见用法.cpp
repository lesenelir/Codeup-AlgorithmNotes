#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]) {
	/*定义时不指定vector的大小*/
	vector<int> v1;
	for (int i = 0; i < 5; i++) {
		v1.push_back(i); // push_back()函数
	}
	for (auto it = v1.begin(); it != v1.end(); it++) {
		printf("%d ", *it);
	}
	cout << endl;
	/*定义的时候指定vector大小	默认里面元素值全为0*/
	vector<int> v2(15);
	printf("%lu ", v2.size());
	cout << endl;
	v2.insert(v2.begin() + 2, -1);
	for (int i = 0; i < v2.size(); i++) {
		printf("%d ", v2[i]);
	}
	cout << endl;
	/*定义vector大小为20并把所有元素置为18*/
	vector<int> v3(20, 18);
	v3.erase(v3.begin() + 1, v3.begin() + 5);
	printf("%lu ", v3.size());
	cout << endl;
	for (auto it = v3.begin(); it != v3.end(); it++) {
		printf("%d ", *it);
	}
	cout << endl;
}