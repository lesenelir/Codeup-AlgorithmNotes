#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]) {
	int m;
	while (scanf("%d", &m)) {
		if (m == 0) break;
		while (m != 0) {
			int n, num;
			scanf("%d", &n);
			int sqr = (int)sqrt(1.0 * n);
			for (int i = 1; i <= sqr; i++) {
				if (n % i == 0) {
					num++;
				}
			}
			num = num * 2;
			if (sqr * sqr == n) num = num -1;
			printf("%d\n", num);
			m--;
		}
	}
}