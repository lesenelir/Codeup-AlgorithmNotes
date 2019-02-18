#include <cstdio>

/** 逆置函数过程方法函数
void function(int a[], int n) {
	int temp;
	for (int i = 0; i < n / 2; i++) {
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
}
**/
int main(int argc, char *argv[]) {
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	int temp;
	// 数组元素逆置关键步骤，记住。
	for (int i = 0; i < 5; i++) {
		temp = a[i];
		a[i] = a[9-i];
		a[9-i] = temp;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", a[i]);
	}
}