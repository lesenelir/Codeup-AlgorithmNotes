#include <iostream>

using namespace std;

char month[13][2] = {
	{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},
	{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}
};

bool isLeapYear(int year) {
	return ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main(int argc, char *argv[]) {
	int temp1, temp2;
	while (scanf("%d %d", &temp1, &temp2) != EOF) {
		if (temp1 > temp2) {
			int temp = temp1;
			temp1 = temp2;
			temp2 = temp;
		}
		
		int y1 = temp1 / 10000, m1 = temp1 % 10000 / 100, d1 = temp1 % 100;
		int y2 = temp2 / 10000, m2 = temp2 % 10000 / 100, d2 = temp2 % 100;
		
		int res = 1;
		while (y1 < y2 || m1 < m2 || d1 < d2) {
			d1++;
			if (m1 > month[m1][isLeapYear(y1)]) {
				m1++;
				d1 = 1;
			} 
			if (m1 == 13) {
				y1++;
				m1 = 1;
			}
			res++;
		}
		printf("%d\n", res);
	}
}