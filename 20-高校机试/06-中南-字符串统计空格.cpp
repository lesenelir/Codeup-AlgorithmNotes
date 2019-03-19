#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	char str[1001];
	while (gets(str) != NULL) {
		int len = strlen(str);
		int count = 0;
		for (int i = 0; i < len; i++) {
			if (str[i] == ' ') {
				count++;
			}
		}
		printf("%d\n", count);
	}
}