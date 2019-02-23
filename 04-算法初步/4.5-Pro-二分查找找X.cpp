#include <iostream>

using namespace std;

int findx(int a[], int left, int right, int x) {
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (a[mid] == x) {
			return mid;
		} else if (a[mid] > x) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	return -1;
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int a[100];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int x;
	scanf("%d", &x);
	printf("%d", findx(a, 0, n-1, x));
}