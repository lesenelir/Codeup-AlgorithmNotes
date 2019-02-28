#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF) {
		int a[1000] = {0};
		int sum[1000] = {0};
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		//对a数组遍历两次，查找元素相同的时刻
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i] == a[j] && i != j) {
					sum[i]++;//此时两者相等的ij，sum[i]=1,
				}
			}
		}
		for (int i = 0; i < n;i++) {
			if (sum[i] != 0) {
				printf("%d\n", sum[i]);
			} else {
				printf("BeiJu\n");
			}
		}
	}
}