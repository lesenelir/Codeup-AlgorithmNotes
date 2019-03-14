#include <iostream>

using namespace std;

const int N = 61;

int main(int argc, char *argv[]) {
	int sum[N];
	for (int i = 2; i < N; i++) {
		sum[i] = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum[i] += j;
			}
		}
	}
	printf("E:");
	for (int i = 2; i < N; i++) {
		if (sum[i] == i) printf(" %d", i);
	}
	printf("\nG:");
	for (int i = 2; i < N; i++) {
		if (sum[i] > i) printf("% d", i);
	}
	printf("\n");
}