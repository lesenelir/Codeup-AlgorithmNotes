#include <iostream>

using namespace std;

int month_y[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int month_n[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool isLeapYear(int y) {
	return ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)); 
}

int main(int argc, char *argv[]) {
	int y, m, d;
	while (scanf("%d/%d/%d", &y, &m, &d) != EOF) {
		int res = 0;
		if (isLeapYear(y)) {
			for (int i = 1; i < m; i++) {
				res = res + month_y[i];
			}
		} else {
			for (int i = 1; i < m; i++) {
				res = res + month_n[i];
			}
		}
		res = res + d;
		printf("%d\n", res);
	}
}