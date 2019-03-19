#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int T;
	while (scanf("%d", &T) != EOF) {
		while (T != 0) {
			int num = 1;
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			
			if (a + b > c) {
				printf("Case #%d: true\n", num);
			} else {
				printf("Case #%d: false\n", num);
			}
			num++;
			T--;
		}
	}
}