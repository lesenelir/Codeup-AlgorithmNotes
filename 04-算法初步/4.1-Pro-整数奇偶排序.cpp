#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}
int main(int argc, char *argv[]) {
	int a[10] = {0}, b[10] = {0};
	int temp;
	int m = 0, n = 0; // m为奇数组的个数，n为偶数组的个数
	while (scanf("%d", &temp) != EOF) {
		if (temp % 2 == 1) {  //奇数
			a[m++] = temp;
		} else {
			b[n++] = temp;
		}
		if (m+n == 10) {
			sort(a, a+m, cmp);
			sort(b, b+n);
			for (int i = 0; i < m; i++) {
				printf("%d ", a[i]);
			}
			for (int i = 0; i < n; i++) {
				printf("%d ", b[i]);
			}
			printf("\n");
			m = n = 0; //多组数据，一次数据处理完从头循环
		}
	}	
}