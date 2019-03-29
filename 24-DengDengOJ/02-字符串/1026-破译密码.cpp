#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

/*
	往右移动五个
*/
int main(int argc, char *argv[]) {
	char str[1001];
	while (gets(str) != NULL) {
		int len = strlen(str);
		for (int i = 0; i < len; i++) {
			if (str[i] >= 'A' && str[i] <= 'U') {
				str[i] = str[i] + 5;
			}
			if (str[i] >= 'V' && str[i] <= 'Z') {
				str[i] = str[i] - 'V' + 'A';
			}
		}
		puts(str);
	}
}