#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

//以十进制数字作为中间媒介来转换
int main() {
	int a, b;
	char str[1001];
	while(scanf("%d %s %d", &a, str, &b) != EOF) {
		int len = strlen(str);
		long temp = 0;
		//a进制数字转换为十进制数字
		for(int i = 0; i < len; i++) {
			if(str[i] <= 'f' && str[i] >= 'a') {
				temp = (str[i] - 'a') + 10 + temp * a;
			} else if(str[i] <= 'F' && str[i] >= 'A') {
				temp = (str[i] - 'A') + 10 + temp * a;
			} else {
				temp = (str[i] - '0') + temp * a;
			}
		}
		//将十进制数字转换为b进制数字
		char z[1001];
		int cnt = 0;
		do {
			if(temp % b >= 10) {
				z[cnt++] = temp % b - 10 + 'A';
			} else {
				z[cnt++] = temp % b + '0'; //+'0'转换为字符串, -'0' 将字符串内的数字提取
			}
			temp = temp / b;
		}while(temp != 0);
		//输出
		for(int i = cnt-1; i >= 0; i--) {
			printf("%c", z[i]);
		}
		printf("\n");
		
	}
	return 0;
}