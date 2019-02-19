#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]) {
	char a[100], b[100];
	char c[200];
	while (scanf("%s %s", a,b) != EOF) {
		int lena = strlen(a);
		int lenb = strlen(b);
		for (int i = 0; i < lena + lenb; i++) {
			if (i < lena) {
				c[i] = a[i];
			} else {
				c[i] = b[i - lena];
			}
		}
		c[lena+lenb] = '\0';
		printf("%s\n", c);
	}
}