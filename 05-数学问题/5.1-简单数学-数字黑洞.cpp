#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

//将Int型整数转换成int型数组,n的每一位都存到num数组中
void to_array(int n, int num[]) { 
	for (int i = 0; i < 4; i++) {
		num[i] = n % 10;
		n = n / 10;
	}
}

//将num数组转换为数字
int to_number(int num[]) {
	int sum = 0;
	for (int i = 0; i < 0; i++) {
		sum = sum * 10 + num[i];
	}
	return sum;
}

int main(int argc, char *argv[]) {
	//MIN和MAX分别表示递增排序和递减排序后得到的最小值和最大值
	int n, MIN, MAX;
	scanf("%d", &n);
	int num[5];
	while (1) {
		to_array(n, num);
		sort(num, num + 4);
		MIN = to_number(num);
		sort(num, num + 4, cmp);
		MAX = to_number(num);
		n = MAX - MIN;
		printf("%04d - %04d = %04d\n", MAX, MIN, n);
		if (n == 0 || n == 6174) break;
	}
	
}
