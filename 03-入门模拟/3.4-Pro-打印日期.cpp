#include <iostream>
#include <cstdio> 
using namespace std;

char month[13][2] = {
	{0,0}, {31,31}, {28,29}, {31,31}, {30,30}, {31,31}, {30,30},{31,31},
	{31,31}, {30,30}, {31,31}, {30,30}, {31,31}
};

bool isLeap(int year) {
	return ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}


int main(int argc, char *argv[]) {
	int y, n, m = 1;
	int d = 0;
	while (scanf("%d %d", &y, &n) != EOF) {
		while (n > 0) {
			d++;
			if (d == month[m][isLeap(y)] + 1) { //d > month[m][isLeap(y)]
				m++;
				d = 1;
			}
			if (m == 13) {
				y++;
				m = 1;
			}
			n--;
		}
		printf("%04d-%02d-%02d\n", y, m, d);
		m = 1, d = 0;
	}
}