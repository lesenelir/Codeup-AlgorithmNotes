#include <iostream>
#include <algorithm>
using namespace std;
/*
	知识点： 排序，去重。
	去重关键：
		排序后，建立一个新的数组，遍历原来的数组，
		若原来相邻的两个元素值不一样则添加到新的数组中
		最后在打印新的数组里面的元素值.
*/
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int a[100];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	int b[100], num = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != a[i+1]) {
			b[num++] = a[i];
		}
	}
	printf("%d\n", num);
	for (int i = 0; i < num; i++) {
		printf("%d ", b[i]);
	}
}