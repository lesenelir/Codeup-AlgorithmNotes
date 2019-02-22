#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int count[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &count[i]);
	}
	for (int i = 1; i < 10; i++) {
		if (count[i] > 0) {
			printf("%d", i);
			count[i]--;
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < count[i]; j++) {
			printf("%d", i);
		}
	}
}