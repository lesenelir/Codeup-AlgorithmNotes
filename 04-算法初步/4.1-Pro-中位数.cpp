#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	int a[1000] = {0};
	while (scanf("%d", &n) != EOF) {
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		if (n % 2 == 0) {
			printf("%d\n", a[n/2]);
		} else {
			printf("%d\n", (a[n/2-1] + a[n/2]) / 2);
		}
	}
}