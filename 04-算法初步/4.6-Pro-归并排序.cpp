#include <iostream>

using namespace std;

void merge(int a[], int l1, int r1, int l2, int r2) {
	int i = l1, j = l2;
	int temp[1000], index;
	while (i <= r1 && j <= r2) {
		if (a[i] <= a[j]) {
			temp[index++] = a[i++];
		} else {
			temp[index++] = a[j++];
		}
	}
	while (i <= r1) {
		temp[index++] = a[i++];
	}
	while (j <= r2) {
		temp[index++] = a[j++];
	}
	for (int i = 0; i < index; i++) {
		a[l1+i] = temp[i];
	}
}

void mergeSort(int a[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		mergeSort(a, left, mid);
		mergeSort(a, mid+1, right);
		merge(a, left, mid, mid+1, right);
	}
}

void print(int a[], int n){
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}
int main(int argc, char *argv[]) {
	int m;
	scanf("%d", &m);
	int n;
	int a[1000];
	while (m != 0) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		mergeSort(a, 0, n-1);
		print(a, n);
		m--;
	}
}