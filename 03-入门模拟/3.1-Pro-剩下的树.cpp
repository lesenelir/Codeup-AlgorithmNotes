#include <cstdio>

// 难， 调试有问题
int main(int argc, char *argv[]) {
	int a[1000] = {0};
	int num[1000] = {0};
	int n, m;
	int c, d;
	int result = 0;
	while (true) {
		scanf("%d %d", &n, &m);
		if (n == 0 && m == 0) {
			break;
		}
		for (int i = 0; i < n + 1; i++) { // 种树
			a[i] = 1;
		}
		for (int i = 0; i < m; i++) {
			scanf("%d %d", &c, &d);    // 输入区间
			for (int j = c; j < d + 1; j++) {
				a[i] = 0; //移走树
			}
		}
		for (int i = 0; i < n + 1; i++) {
			if (a[i] == 1) num[result]++;
		}
		result++;
	}
	for (int i = 0; i < result; i++) {
		printf("%d\n", num[i]);	
	}
}