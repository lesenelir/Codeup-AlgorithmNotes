#include <iostream>
#include <cstdio>

const int maxSize = 20;
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	int a[maxSize];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	//查找x元素在数组中的位置
	int x;
	scanf("%d", &x);
	int j; //下标
	for (int j = 0; j < n; j++) {
		if (a[j] == x) {
			printf("%d", j);
			break;
		} 
	}
	if (j == n) {
		printf("%d", -1);
	}
}