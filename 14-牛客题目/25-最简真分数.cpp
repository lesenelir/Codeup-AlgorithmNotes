#include <iostream>
#include <cstdio>
using namespace std;


//求两个数是否互质，可以用最大公约数函数来求解，若函数返回值为1，则两个数互质
int gcd(int a, int b) { 
	if(b == 0) return a;
	else return gcd(b, a%b);
}


int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		int a[1000];
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int count = 0;
		for(int i = 0; i < n; i++) { //分母
			for(int j = 0; j < n; j++) { //分子
				if(a[i] > a[j] && gcd(a[i], a[j]) == 1) { //最大公约数为1的时候表示互质
					count++;
				}  
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}