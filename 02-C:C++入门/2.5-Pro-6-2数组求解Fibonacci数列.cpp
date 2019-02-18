#include <cstdio>

int main(int argc, char *argv[]) {
	// 赋初始值
	int a[20] = {1,1};
	// 迭代相加往后赋值
	for (int i = 0; i < 20; i++) {
		a[i] = a[i-1] + a[i-2];
	}
	// 遍历输出元素
	for (int i = 0; i < 20; i++) {
		printf("%d\n", a[i]);
	}
	
}