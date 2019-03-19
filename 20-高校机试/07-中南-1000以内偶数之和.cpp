#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n = 1000;
	int sum = 0;
	for (int i = 1; i <= 1000; i++) {
		if (i % 2 == 0) {
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}