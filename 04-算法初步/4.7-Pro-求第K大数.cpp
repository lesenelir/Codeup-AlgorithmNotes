#include <iostream>

using namespace std;

int Partition(int a[], int left, int right) {
	int temp = a[left];
	while (left < right) {
		while (left < right && a[right] > temp) right--;
		a[left] = a[right];
		while (left < right && a[left] < temp) left++;
		a[right] = a[left];
	}
	a[left] = temp;
	return left;
}

int randSelect(int a[], int left, int right, int k) {
	if (left == right) return a[left];
	int p = Partition(a, left, right);
	int m = p-left+1;
	if (k == m) return a[p];
	if (k < m) {
		return randSelect(a, left, p-1, k);
	} else {
		return randSelect(a, p+1, right, k-m);
	}
}


int main(int argc, char *argv[]) {
	int n, x;
	scanf("%d %d", &n, &x);
	int a[100];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int b = randSelect(a, 0, n-1, x);
	printf("%d\n", b);
}