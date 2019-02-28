#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main(int argc, char *argv[]) {
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF) {
		int a[1000];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		sort(a, a+n, cmp);
		for (int i = 0; i < 3; i++) {
			printf("%d ", a[i]);
		}
	}	
}