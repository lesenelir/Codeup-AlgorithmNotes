#include <iostream>

using namespace std;

int Fibonacci(int n) {
	if (n == 0) return 7;
	else if (n == 1) return 11;
	else return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[100];
		//输入数据保存在数组中
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		//判断数组中的每一个数是否能被3整除
		for (int i = 0; i < n; i++) {
			if (Fibonacci(a[i]) % 3 == 0) {
				printf("yes\n");
			} else {
				printf("no\n");
			}
			
		}
		
	}
}