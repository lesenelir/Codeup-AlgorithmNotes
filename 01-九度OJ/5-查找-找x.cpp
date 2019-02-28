#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1000];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int x;
		scanf("%d", &x);
		int result = -1;
		for (int i = 0; i < n; i++) {
			if (a[i] == x) {
				result = i;
				break;
			}
		}
		printf("%d", result);
	}
	
}