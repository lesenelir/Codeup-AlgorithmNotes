#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

/*
	char 整数按照字符串%s读入时，下标是从高位开始的
	数字：2 1 6
	下标：0 1 2
*/
int Reverse(int n) {
	char str[11];
	sprintf(str,"%d",n); //从右向左:n以%d格式写入str数组中
	int len = strlen(str);
	reverse(str, str+len);
	int sum = 0;
	for (int i = 0; i < len; i++) {
		//pow(a, b) 其中a, b必须都要是double型
		sum = sum + (str[len-i-1]-'0') * (int)pow(10.0, i);
	}
	return sum;
}


int main() {
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF) {
		int reverse_sum = Reverse(a) + Reverse(b); //两个数翻转和
		int sum_reverse = Reverse(a+b); //两个数和的翻转
		if(reverse_sum == sum_reverse) {
			printf("%d\n", a+b);
		}else {
			printf("NO\n");
		}
		
	}
	return 0;
}