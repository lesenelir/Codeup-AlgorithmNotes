#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void MyStrcat(char dstStr[], char srcStr[]) {
	int len1 = strlen(dstStr);
	int len2 = strlen(srcStr);
	for(int i = 0; i < len2; i++) {
		dstStr[len1++] = srcStr[i];
	}
	dstStr[len1] = '\0';
}


int main() {
	char str1[1001], str2[1001];
	while(scanf("%s %s", str1, str2) != EOF) {
		MyStrcat(str1, str2);
		printf("%s\n", str1);
	}
	
	return 0;
}