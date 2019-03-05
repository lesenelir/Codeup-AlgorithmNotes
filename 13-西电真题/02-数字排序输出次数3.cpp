#include <iostream>
using namespace std;

const int n = 4;

int main(int argc, char *argv[]) {
	int a[11] = {0};
	int temp;
	//数组下标代表数字，数组值代表出现次数
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		a[temp]++;
	}		
	//遍历a数组
	for (int i = 0; i < 11; i++) {
		if (a[i] != 0) {
			printf("%d:%d\n", i, a[i]);
		}
	}
}