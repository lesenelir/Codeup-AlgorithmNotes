#include <iostream>

using namespace std;

/*选择排序*/
void selectsort(int a[], int n) {
	//进行n躺排序
	for (int i = 0; i <= n; i++) {
		//变量k存储最小值的数组下标 a[i]是第一个元素
		int k = i;
		for (int j = i; j <= n; j++) {
			if (a[j] < a[k]) {
				k = j;
			}
		}
		int temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	}
}

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1000];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		selectsort(a, n);
		for (int i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}
	}
}