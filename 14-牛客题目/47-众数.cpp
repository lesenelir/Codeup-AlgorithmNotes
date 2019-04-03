#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int n = 20;

//hash思想
int main() {
	int x;
	int a[11] = {0};
	for(int i = 0; i < n; i++) {
		scanf("%d", &x);
		a[x]++; //数组下标代表数字，数组值代表这个数字出现的次数
	}
	//找众数即：找a数组元素值最大的数字，输出下标；若元素值相等，则输出下标较小的数字
	//因为遍历数组是从0开始，若数组元素相等，先前必定已经遍历过了，此时不做处理。
	int max = a[0], pos;
	for(int i = 0; i < 11; i++) {
		if(max < a[i]) {
			max = a[i];
			pos = i;
		}
	}
	printf("%d\n", pos);
	
	return 0;
}