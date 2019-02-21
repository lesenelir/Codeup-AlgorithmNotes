#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(int argc, char *argv[]) {
	char str[201];
	while (gets(str) != NULL) {
		int len = strlen(str);
		sort(str, str+len);
		puts(str);
	}
}