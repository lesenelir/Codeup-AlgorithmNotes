#include <iostream>

using namespace std;

char month[13][2] = {
	{0,0}, {31,31}, {28,29}, {31,31}, {30,30}, {31,31}, {30,30},{31,31},
	{31,31}, {30,30}, {31,31}, {30,30}, {31,31}
};

bool isLeap(int year) {
	return ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int y, m, d, sum;
	while (n--) {
		scanf("%d %d %d %d", &y, &m, &d, &sum);
		for (int i = 0; i < sum; i++) {
			d++;
			if (d > month[m][isLeap(y)]) {  // d == month[m][isLeap(y)] + 1
				m++;
				d = 1;
			}
			if (m == 13) {
				m = 1;
				y++;
			}
		}
		printf("%04d-%02d-%02d", y, m, d);
	}
}