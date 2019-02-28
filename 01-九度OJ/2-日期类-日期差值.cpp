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
	int time1, y1, m1, d1;
	int time2, y2, m2, d2;
	scanf("%d %d", &time1, &time2);	
	
	int temp;
	if (time1 > time2) {
		temp = time1;
		time1 = time2;
		time2 = temp;
	}
	
	y1 = time1 / 10000, m1 = time1 % 10000 / 100, d1 = time1 % 100;
	y2 = time2 / 10000, m2 = time2 % 10000 / 100, d2 = time2 % 100;
	
	int value; //记录差值
	while (y1 < y2 || m1 < m2 || d1 < d2) {
		d1++;
		if (d1 > month[m1][isLeapYear(y1)]) {
			m1++;
			d1 = 1;
		}
		if (m1 == 13) {
			y1++;
			m1 = 1;
		}
		value++;
	}
	printf("%d", value);
}