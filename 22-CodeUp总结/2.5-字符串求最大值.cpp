#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char *argv[]) {
	char str1[100], str2[100], str3[100];
	gets(str1);
	gets(str2);
	gets(str3);
	if (strcmp(str1, str2) > 0) {
		if (strcmp(str1, str3) > 0) {
			puts(str1);
		} else {
			puts(str3);
		}
	} else {
		if (strcmp(str2, str3) > 0) {
			puts(str2);
		} else {
			puts(str3);
		}
	}
}