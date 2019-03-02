#include <iostream>

using namespace std;

int sumnumber(int a[], int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
//		int temp = a[i], j = i-1;
//		while (j >= 0 && a[j] < temp) {
//			sum = sum + a[j];
//			j--;
//		}
		for (int j = i-1; j>= 0; j--) {
			if (a[j] < a[i]) {
				sum = sum + a[j];
			}
		}
	}
	return sum;
}


int main(int argc, char *argv[]) {
	int a[5] = {1, 3, 4, 2, 5};
	int result = 0;
	result = sumnumber(a, 5);
	printf("%d", result);
}