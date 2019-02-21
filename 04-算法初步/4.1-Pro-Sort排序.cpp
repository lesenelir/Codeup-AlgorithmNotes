#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	int a[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}	
	sort(a, a+n);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}