#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1000];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		if (n == 1) {
			printf("%d ", a[0]);
			continue;
		}
		sort(a, a+n);
		for (int i = 0; i < n - 1; i++) {
			printf("%d ", a[i]);
		}
	}
	
}