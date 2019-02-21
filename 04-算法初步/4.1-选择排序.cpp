#include <iostream>
#include <cstring>
using namespace std;

void selectSort(int a[], int n) {
	for (int i = 0; i < n; i++) {
		int k = i;
		for (int j = i; j < n; j++) { //选出[i,n]中最小的元素
			if (a[j] < a[k]) {
				k = j;
			}
		}
		int temp = a[i]; //此时已经找到最小的元素
		a[i] =  a[k];
		a[k] = temp;
	}
}

int main(int argc, char *argv[]) {
	int a[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	selectSort(a, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}