#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char str1[20], str2[20];
	gets(str1);
	gets(str2);
	strcat(str1, str2);
	puts(str1);
}