#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int A;
	while(scanf("%d", &A) != EOF) {
		int a[10001], num = 0;
		do{
			a[num++] = A % 2;
			A = A / 2;
		}while(A != 0);
		
//		for (int i = 0; i < num; i++) {
//			printf("%d", a[i]);
//		}
		
		//此时z数组的逆序二进制表示就是A，z数组的正序二进制表示就是B
		int B = 0, product = 1;
		for(int i = num-1; i >= 0; i--) {
			B = B + a[i] * product;
			product = product * 2;
			
		}
		
		printf("%d\n", B);
	}
	return 0;
}