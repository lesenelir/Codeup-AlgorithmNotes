#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]) {
	int a, b, k;
	while (scanf("%d %d %d", &a, &b, &k) != EOF) {
		if (a == 0 && b == 0) break;
		/*pow()函数是double类型需要进行强制类型转换*/
		int result_a = a % (int)pow(10, k);
		int result_b = b % (int)pow(10, k);
		if (result_a == result_b) {
			printf("-1\n");
		} else {
			printf("%d ", a+b);
		}
	}
}