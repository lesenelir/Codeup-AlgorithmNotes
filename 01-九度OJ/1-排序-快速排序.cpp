#include <iostream>

using namespace std;

int paration(int a[], int left, int right) {
	int temp = a[left];
	while (left < right) {
		while (left < right && a[right] > temp) right--;
		a[left] = a[right];
		while (left < right && a[left] < temp) left++;
		a[right] = a[left];
	}
	a[left] = temp; //temp放到left与right相遇的地方
	return left;
}

void quicksort(int a[], int left, int right) {
	if (left < right) {
		//将[left, right]一分为二
		int pos = paration(a, left, right);
		quicksort(a, left, pos - 1); //左子区间进行递归快速排序
		quicksort(a, pos + 1, right); //右子区间进行递归快速排序
	}
}

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1000];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		quicksort(a, 0, n-1);
		for (int i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}
	}
}