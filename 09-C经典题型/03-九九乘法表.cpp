#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int result = 1;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= i; j++) {
			result = i * j;
			printf("%d*%d=%-3d ", j, i, result);

		}
		printf("\n");
	}
}