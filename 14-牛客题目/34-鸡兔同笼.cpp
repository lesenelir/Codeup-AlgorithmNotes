#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a;
	while(scanf("%d", &a) != EOF) {

		if(a % 2 != 0) {
			printf("0 0\n");
		} else {
			int max = 0, min = 0;
			max = a / 2; //脚全部都是鸡的时候，此时是最多的
			min = a/4 + (a%4)/2; //脚尽可能的让兔子占有，多出的余数用鸡来占
			printf("%d %d", min, max);
		}
		
	}
	return 0;
}
