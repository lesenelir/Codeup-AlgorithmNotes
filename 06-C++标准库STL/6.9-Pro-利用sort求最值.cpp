#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);	
	int a[1000] = {0};
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	int max = 0, min = 0;
	min = a[0];
	max = a[n-1];
	printf("%d %d", max, min);
}