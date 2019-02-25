#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int x,n;
	while (scanf("%d %d", &x, &n) != EOF) {
		double y = x;
		for (int i = 0; i < n; i++) {
			y = y*2/3+x/(3*y*y);
		}
		printf("%.6f\n", y);
	}
}