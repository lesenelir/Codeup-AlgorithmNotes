#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int a[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	if (n == 1) {
		printf("%d\n", a[0]);
		printf("%d", -1);
	} else {
		printf("%d\n", a[n-1]);
		for (int i = 0; i < n-1; i++) {
			printf("%d ", a[i]);
		}
	}
}