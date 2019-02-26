#include <iostream>

using namespace std;

//最大公约数
int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

/*a,b得到最大公约数d之后，可以马上得到a,b最小公倍数是a/d*b */
int main(int argc, char *argv[]) {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		int d = gcd(a, b);
		int result = a / d * b;
		printf("最小公倍数是%d", result);
	}	
}