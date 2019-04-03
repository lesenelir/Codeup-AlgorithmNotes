#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		int a[1001];
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int max = 0, min = 0;
		for(int i = 1; i < n; i++) {
			if(a[i] > a[max]) {
				max = i;
			}
			if(a[i] < a[min]) {
				min = i;
			}
		}
		int temp;
		temp = a[max];
		a[max] = a[min];
		a[min] = temp;
		
		for(int i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}
		
	}
	return 0;
}