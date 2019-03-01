#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	char a[1000], b[1000];
	while (scanf("%s %s", a, b) != EOF) {
		int result = 0;
		for (int i = 0; a[i] != 0; i++) {
			for (int j = 0; b[j] != 0; j++) {
				result = result + (a[i] - '0') * (b[j] - '0');
			}
		}
		printf("%d\n", result);
	}
	
}