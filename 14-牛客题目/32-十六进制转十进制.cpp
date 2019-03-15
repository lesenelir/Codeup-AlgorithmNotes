#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

/*
	十六进制:0xAB : 10*16^1 + 11*16^0
		str[0] = 0, str[1] = x, str[2] = A, str[3] = B
*/
int main() {
	char str[1001];
	while(scanf("%s", str) != EOF) {
		int len = strlen(str);
		int ans = 0, bit = 1;
		for(int i = len-1; i >= 2; i--) { //字符数组最开始两位保存十六进制标志所以i >= 2
			if(str[i] >= 'A' && str[i] <= 'F') {
				ans = ans + (str[i] - 'A' + 10) * bit; //字符ASCII转换为整数 -‘A’+10
			} else {
				ans = ans + (str[i] - '0') * bit;
			}
			bit = bit * 16;
		}
		printf("%d\n", ans);
	}
	
	return 0;
}