#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int a, n;
	scanf("%d %d", &a, &n);
	int sum = 0;
	for (int i = 1; i < n; i++) {
		sum = a;
		a = a * 10 + a;
		sum = sum + a;
	}
	printf("%d\n", sum);
}