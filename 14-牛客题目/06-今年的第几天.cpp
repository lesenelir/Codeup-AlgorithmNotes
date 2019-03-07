#include <iostream>
#include <cstdio>
using namespace std;

int month_n[13] = {0, 31,28,31,30,31,30,31,31,30,31,30,31};
int month_y[13] = {0, 31,29,31,30,31,30,31,31,30,31,30,31};

bool isLeapYear(int year) {
	if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
		return true;
	} else {
		return false;
	}
}


int main() {
	int y, m, d;
	while(scanf("%d %d %d", &y, &m, &d) != EOF) {
		int sum = 0;
		if(isLeapYear(y)) {
			for(int i = 1; i < m; i++) { //从一月开始循环求解当前输入月数之前的每一天
				sum = sum + month_y[i];
			}
		} else{
			for(int i = 1; i <  m; i++) {
				sum = sum + month_n[i];
			}
		}
		sum = sum + d; //sum加上输入的day天数值
		printf("%d\n", sum);
	}
	return 0;
}