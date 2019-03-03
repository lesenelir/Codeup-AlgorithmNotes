#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	char str[1000];
	int letters = 0, space = 0, digit = 0, other = 0;
	while (gets(str) != NULL) {
		for (int i = 0; i != '\0'; i++) {
			if ( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') ) {
				letters++;
			} else if (str[i] == ' ') {
				space++;
			} else if (str[i]>='0' && str[i]<='9') {
				digit++;
			} else {
				other++;
			}
		}
		printf("%d %d %d %d", letters, space, digit, other);
	}
}