#include <iostream>
#include <algorithm>
using namespace std;

const int n = 20;

int main(int argc, char *argv[]) {
	int a[21];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	//排序
	sort(a, a+n);
	int count = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] != a[i+1]) {
			printf("%d:%d\n",a[i], count);
			count = 1;
		} else {
			count++;
		}
	}

}