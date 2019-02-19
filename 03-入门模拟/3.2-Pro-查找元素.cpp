#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	// 数组a赋值
	int n;
	scanf("%d", &n);
	int a[20];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	// 数组b赋值
	int m;
	scanf("%d", &m);
	int b[20];
	for (int i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}
	// 遍历前m个元素，观察a数组与b数组对应元素是否相等，若相等则查找到元素
	for (int i = 0; i < m; i++) {
		if (a[i] == b[i]) {
			printf("YES\n");
		} else {
			printf("NO");
		}
	}
}