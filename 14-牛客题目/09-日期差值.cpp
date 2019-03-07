#include <iostream>
#include <cstdio>
using namespace std;

char month[13][2] = {
	{0,0}, {31,31}, {28,29}, {31,31}, {30,30}, {31,31}, {30,30},
	{31,31}, {31,31}, {30,30}, {31,31}, {30,30}, {31,31}
};

bool isLeapYear(int year) {
	if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int temp1, temp2;
	while(scanf("%d %d", &temp1, &temp2) != EOF) {
		if(temp1 > temp2) { //temp1永远小于temp2
			int temp = temp1;
			temp1 = temp2;
			temp2 = temp;
		}
		int y1, m1, d1;
		int y2, m2, d2;
		y1 = temp1 / 10000, m1 = temp1 % 10000 / 100, d1 = temp1 % 100;
		y2 = temp2 / 10000, m2 = temp2 % 10000 / 100, d2 = temp2 % 100;
		
		int result = 1; //记录差值
		while(y1 < y2 || m1 < m2 || d1 < d2) { 
			d1++;//d1累加
			if(d1 > month[m1][isLeapYear(y1)]) { //超过当月的最大天数
				m1++;
				d1 = 1;
			}
			if(m1 == 13) { //月份超过12
				y1++;
				m1 = 1;
			}
			result++;
		}
		printf("%d\n", result);
	}
	return 0;
}