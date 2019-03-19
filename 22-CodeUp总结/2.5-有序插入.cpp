#include <iostream>
#include <algorithm>
using namespace std;
const int n = 10;
int a[n];

int main(int argc, char *argv[]) {
	for (int i = 0; i < n-1; i++) {
		scanf("%d", &a[i]);
	}
	int x;
	scanf("%d", &x);
	a[n-1] = x;
	sort(a, a+n);
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}