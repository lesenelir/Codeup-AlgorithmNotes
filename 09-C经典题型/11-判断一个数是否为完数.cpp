#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum = sum + i;
		}
	}
	if (sum == n) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}