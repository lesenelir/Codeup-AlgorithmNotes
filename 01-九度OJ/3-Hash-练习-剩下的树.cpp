#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int n, m;
	int c, b;
	while (scanf("%d %d", &n, &m) != EOF) {
		if (n == 0 && m == 0) break;
		int a[100] = {0};
		int result = 0;
		//把所有n+1位置赋初始值1
		for (int i = 0; i <= n; i++) {
			a[i] = 1;
		}
		//删除的位置赋值0区分
		for (int i = 0; i < m; i++) {
			scanf("%d %d",&c, &b);
			for (int j = c; j <= b; j++) {
				a[j] = 0;
			}
		}
		//遍历所有位置，当没有删除的时候，计数器加1
		for (int i = 0; i <= n; i++) {
			if (a[i] == 1) {
				result++;
			}
		}
		printf("%d", result);
	}	
}