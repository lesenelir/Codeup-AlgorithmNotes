#include <cstdio>

//此题目注重最后输入加到最后的数组元素中,从后往前调整元素大小
int main(int argc, char *argv[]) {
	int a[10];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &a[9]);	
	// 排序调整
	int temp;
	for (int i = 9; i >= 0; i--) {
		if (a[i] < a[i-1]) {
			temp = a[i-1];
			a[i-1] = a[i];
			a[i] = temp;
		} 
	}
	// 输出数组
	for (int i = 0; i < 10; i++) {
		printf("%d\n", a[i]);
	}
}