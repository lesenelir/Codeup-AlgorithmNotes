#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1001];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		
		int x;
		scanf("%d", &x);
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == x) {
				count++;
			}
		}
		printf("%d\n", count);
	}
}