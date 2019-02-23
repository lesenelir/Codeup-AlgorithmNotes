#include <iostream>

using namespace std;

int binartsearch(int a[], int left, int right, int x) {
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
	int m;
	scanf("%d", &m);
	int b[100];
	for (int i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}
	// 关键步骤
	for (int i = 0; i < m; i++) {
		int x = binartsearch(a, 0, n-1, b[i]);
		if (x != -1) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}