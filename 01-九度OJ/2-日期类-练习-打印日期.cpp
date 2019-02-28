#include <iostream>

using namespace std;
char month[13][2] = {
	{0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31,31},
	{31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}			
};

bool isLeapYear(int year) {
	if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		return true;
	} else {
		return false;
	}
}

int main(int argc, char *argv[]) {
	int y, n;
	int d = 0, m = 1;
	while (scanf("%d %d", &y, &n) != EOF) {
		d = 0, m = 1; //计算完一次后重新开始计数		
		while (n > 0) {
			d++; //易漏
			if (d > month[m][isLeapYear(y)]) {
				m++;
				d = 1;
			}
			if (m == 13) {
				y++;
				m = 1;
			}
			n--;
		}
		printf("%04d-%02d-%02d", y, m, d);		
	}	
}