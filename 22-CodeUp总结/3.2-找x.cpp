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
		int pos = -2;
		bool flag = false;
		for (int i = 0; i < n; i++) {
			if (a[i] == x) {
				pos = i;
				flag = true;
			}
		}
		if (flag == true) {
			printf("%d\n", pos);
		} else {
			printf("-1\n");
		}
		
	}	
}