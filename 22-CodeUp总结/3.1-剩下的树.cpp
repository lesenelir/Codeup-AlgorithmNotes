#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF) {
		if(n == 0 && m == 0) break;
		int a[100001];
		for (int i = 0; i <= n; i++) {
			a[i] = 1;
		}
		int x, y;
		while (m != 0) {
			scanf("%d %d", &x, &y);
			for (int i = x; i <= y; i++) {
				a[i] = 0;
			}
			m--;
		}
		int count = 0;
		for (int i = 0; i <= n; i++) {
			if (a[i] == 1) {
				count++;
			}
		}
		printf("%d\n", count);
	}
}