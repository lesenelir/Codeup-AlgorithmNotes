#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char str1[20], str2[20], str3[20];
	gets(str1);
	gets(str2);
	gets(str3);
	if (strcmp(str1, str2) > 0) {  // str1 > str2
		if (strcmp(str1, str3) > 0) { // str1 max
			puts(str1);
		} else {
			puts(str3);
		}
	} else {    // str2 > str1
		if (strcmp(str2, str3) > 0) { // str2max
			puts(str2);
		} else {
			puts(str3);
		}
	}

}