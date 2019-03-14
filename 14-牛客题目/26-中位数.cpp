#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		if(n == 0) break;
		int a[10010];
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		sort(a, a+n);
		if(n % 2 != 0) {
			printf("%d\n", a[(n/2)]);
		} else {
			int res = (a[n/2] + a[(n/2)-1]) / 2;
			printf("%d\n", res);
		}
	}
	return 0;
}