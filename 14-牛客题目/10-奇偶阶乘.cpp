#include <iostream>
#include <cstdio>
using namespace std;

int function(int n) {
	if (n == 1) return n;
	else return n * function(n-1);
}
/*  阶乘非递归版本：
	int funtcion(int n) {
		int reuslt = 1;
		for(int i = 1; i <= n; i++) {
			result = result * i;
		}
		return result;
	}
*/

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		int y1 = 0, y2 = 0;
		for(int i = 1; i <= n; i = i + 2) { //关键步骤
			y1 = y1 +  function(i);
		}
		for(int i = 2; i <= n; i = i + 2) {
			y2 = y2 + function(i);
		}
		printf("%d %d", y1, y2);
	}
	return 0;
}