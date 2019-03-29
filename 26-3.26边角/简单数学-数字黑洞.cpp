#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

void to_array(int n, int num[]) {
	for (int i = 0; i < 4; i++) {
		num[i] = n % 10;
		n = n / 10;
	}
}

int to_num(int num[]) {
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		sum = sum * 10 + num[i];
	}
	return sum;
}

int main() {
	int n, MIN, MAX;
	while (scanf("%d", &n) != EOF) {
		int num[5];
		//int count = 0;
		while (true) {
			to_array(n, num);
			sort(num, num+4);
			MIN = to_num(num);
			sort(num, num+4, cmp);
			MAX = to_num(num);
			n = MAX - MIN;			
			printf("%04d-%04d=%04d\n", MAX, MIN, n);
//			if (n != 6174 && n != 0) {
//				count++;
//			} else {
//				break;
//			}
			if (n == 6174 || n == 0) break;
			
			
		}
//		printf("%d\n", count);
		
	}
	
	return 0;
}