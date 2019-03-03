#include <iostream>

using namespace std;

int month_y[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int month_n[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

bool isLeapYear(int year) {
	return ( (year % 100 != 0 && year % 4 == 0) || year % 400 == 0);
}

int main(int argc, char *argv[]) {
	int y, m, d;
	while (scanf("%d %d %d", &y, &m, &d) != EOF) {
		int result = 0;
		if (isLeapYear(y)) {
			for (int i = 0; i < m; i++) {
				result = result + month_y[i];
			}
		} else {
			for (int i = 0; i < m; i++) {
				result = result + month_n[i];
			}
		}
		result = result + d;
		printf("%d\n", result);
	}
}