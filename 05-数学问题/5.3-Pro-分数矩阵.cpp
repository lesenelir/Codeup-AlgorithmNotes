#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int m;
	while (scanf("%d", &m) != EOF) {
		if (m == 0) break;
		double sum = 0;
		for (int i = 1; i < m; i++) {
			sum = sum + 1.0 * (m-i) / (i+1);
		}
		sum = sum * 2 + m;
		printf("%.2f\n", sum);
	}
}