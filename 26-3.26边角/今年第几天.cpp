#include <iostream>
#include <cstdio>
using namespace std;

int month_n[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int month_y[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

bool isLeap(int y) {
	return (y%400 == 0 || (y%100!=0 && y%4==0));
}

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		while (n--) {
			int y, m, d;
			int res = 0;
			scanf("%d %d %d", &y, &m, &d);
			if(isLeap(y) == true) {
				for(int i = 1; i < m; i++) {
					res = res + month_y[i];
				} 
			} else {
				for(int i = 1; i < m; i++) {
					res = res + month_n[i];
				}
			}
			res  = res + d;        
			printf("%d\n", res);
		}
	}
	
	
	return 0;
}