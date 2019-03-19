#include <iostream>

using namespace std;

void bubble(int a[], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n-i; j++) {
			if (a[j] > a[j+1]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}


int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1001];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		bubble(a, n);
		for (int i = 0; i < n; i++) {
			printf("%d\n", a[i]);
		}
	}
}