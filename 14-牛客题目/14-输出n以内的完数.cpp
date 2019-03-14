#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d",&n) != EOF) {
		int sum[1001];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j < i; j++) {
				if (i % j == 0) {
					sum[i] += j;
				}
			}
		}
		for (int i = 1; i <= n; i++) {
			if (sum[i] == i) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}