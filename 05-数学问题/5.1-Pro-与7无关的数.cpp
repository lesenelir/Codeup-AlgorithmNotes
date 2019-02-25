#include <iostream>

using namespace std;

bool judge(int n) {
	if (n % 7 == 0) return 1;
	while (n != 0) {
		if ((n % 10) == 7) return 1;
		n = n / 10; //去个位
	}	
}

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			if (!judge(i)) {
				sum = sum + i * i;
			}
		}
		printf("%d\n", sum);
	}
}