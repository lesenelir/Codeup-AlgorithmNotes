#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int a[1001], num = 0;
	for(int i = 0; i <= 5; i++) { //一张不选0, 能选的最大值5张
		for(int j = 0; j <= 4; j++) {
			for(int k = 0; k <= 6; k++) {
				a[num++] = (i*8 + j*10 + k*18);  //穷举出所有的情况，把这些情况全部压入a数组中，
			}
		}
	}
	sort(a, a+num);
	int sum = 0;
	for(int i = 1; i < num; i++) {
		if(a[i] != a[i-1]) sum++;
	}
	printf("%d", sum);
	
	return 0;
}