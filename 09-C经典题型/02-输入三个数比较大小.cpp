#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	int a[3] = {0};
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+3);
	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}
}