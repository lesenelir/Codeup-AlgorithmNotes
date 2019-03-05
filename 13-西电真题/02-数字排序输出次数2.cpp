#include <iostream>

using namespace std;

const int n = 20;

int main(int argc, char *argv[]) {
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	int b[n], num = 0;
	int c[n], cnt = 0;
	int count = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] != a[i+1]) {
			b[num++] = a[i];
			c[cnt++] = count;
			count = 1;
		} else {
			count++;
		}
	}
	
	for (int i = 0; i < num; i++) {
		printf("%d:%d\n", b[i], c[i]);
	}
}