#include <iostream>

using namespace std;

void insertsort(int a[], int n) {
	for (int i = 1; i < n; i++) { //进行n-1趟排序
		//temp保存待排序数字
		int temp = a[i], j = i;
		//插入排序关键：从后往前枚举已经有序部分
		while (j > 0 && temp < a[j - 1]) {
			a[j] = a[j-1]; //a[j-1]后移
			j--;
		}
		a[j] = temp; //插入位置为j
	}
}

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n)) {
		int a[1000];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		insertsort(a, n);
		for (int i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}
	}
}