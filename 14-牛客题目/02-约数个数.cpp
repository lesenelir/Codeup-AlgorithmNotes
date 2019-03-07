#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if ( n == 0) break;
		int a[1001];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int count = 0;
		for(int i = 0; i < n; i++) {
			count = 0;
			for (int j = 1; j * j <a[i]; j++) { //此处用j循环会超时，故需要从j*j开始循环
				if (a[i] % j == 0) {
					count = count + 2; //j*j 所以要加2
				}
			}
			printf("%d\n", count);
		}
	}
	return 0;
}