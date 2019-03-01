#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	long long int a, b;
	int m;
	while (scanf("%d", &m) != EOF) {
		if (m == 0) break;
		scanf("%lld %lld", &a, &b);
		int result_ten = a + b;
		//将十进制数result_ten转换为m进制的数
		int buf[1000] = {0}, num = 0;
		do {
			buf[num++] = result_ten % m;
			result_ten = result_ten / m;
		} while (result_ten != 0);
		//输出
		for (int i = num - 1; i >= 0; i--) {
			printf("%d", buf[i]);
		}
		printf("\n");
	}
}