#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]) {
	for (int i = 1; i < 1000; i++) {
		int sum = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) sum = sum + j;
		}
		if (sum == i) {
			printf("%d ", i);
		}
		
	}
}