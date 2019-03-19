#include <iostream>

using namespace std;

const int n = 10;

int main(int argc, char *argv[]) {
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	//数组逆置操作
	for (int i = 0; i < n/2; i++) {
		int temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}