#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	char str[1001];
	while (scanf("%s", str) != EOF) {
		int len = strlen(str);
		for (int i = 0; i < len; i++) {
			if (str[i] >= 'a' && str[i] <= 'z') {
				str[i] = 'a' + 'z' - str[i];
			}
			if (str[i] >= 'A' && str[i] <= 'Z') {
				str[i] = 'A' + 'Z' - str[i];
			}	
			if (str[i] >= '9' && str[i] >= '0') {
				str[i] = str[i];
			}
		}
		puts(str);
	}
}