#include <iostream>

using namespace std;


int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[1001];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		
		int ou = 0, ji = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 == 0) {
				ou++;
			}
			if (a[i] % 2 != 0) {
				ji++;
			}
		}
		
		if (ou > ji) {
			printf("NO\n");
		} else {
			printf("YES\n");
		}
		
	}	
}