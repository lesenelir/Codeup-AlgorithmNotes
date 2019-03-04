#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	char str[100];
	scanf("%s", str);
	int len = strlen(str);
	reverse(str, str+len);
	puts(str);
}