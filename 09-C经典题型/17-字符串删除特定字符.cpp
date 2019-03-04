#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	char str[1000];
	char c;
	while (scanf("%s %c", str, &c) != EOF) {
		int len = strlen(str);
		for (int i = 0; i < len; i++) {
			if (str[i] != c) {
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
}