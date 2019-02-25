#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int m;
	scanf("%d", &m);
	while (m != 0) {
		int n;
		scanf("%d", &n);
		if (n % 2 != 0) printf("0 0\n"); //鸡兔同笼脚的个数必须是偶数
		else if (n % 4 == 0) printf("%d %d\n", n/4, n/2);//脚的个数是4的倍数，最少动物全是兔子，最多动物全是鸡
		else printf("%d %d\n", n/4+1,n/2);
		m--;
	}
}