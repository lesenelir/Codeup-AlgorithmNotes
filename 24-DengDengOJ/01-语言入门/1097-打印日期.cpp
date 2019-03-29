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
	int y, n;
	while (scanf("%d %d", &y, &n) != EOF) {
		int m = 1, d = 0;
		while (n--) {
			d++;
			if (d > month[m][isLeap(y)]) {
				d = 1;
				m++;
			}
			if (m == 13) {
				m = 1;
				y++;
			}
		}
		printf("%04d-%02d-%02d\n", y, m, d);
	}	
}