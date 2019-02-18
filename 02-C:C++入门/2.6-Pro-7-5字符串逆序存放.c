#include <stdio.h>
#include <string.h>

void function(char a[]) {
	int n = strlen(a);
	for (int i = 0; i < n; i++) {
		printf("%c", a[n-i-1]);
	}
}
int main(int argc, char *argv[]) {
	char str[20];
	gets(str);
	function(str);
}