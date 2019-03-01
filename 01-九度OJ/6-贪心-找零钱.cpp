#include <iostream>

using namespace std;

//数组从大到小排序存储钱，因为要输出大面币所以先保存大的
int money[5] = {50, 20, 10, 5, 1};

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int x; //面值数
		for (int i = 0; i < 5; i++) {
			x = n / money[i];
			if (x != 0) {
				printf("%d*%d", money[i], x);
				n = n % money[i];
				if (n != 0) {
					printf("+");
				}
			}
		}		
		printf("\n");
	}
}