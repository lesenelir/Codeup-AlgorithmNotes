#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(int argc, char *argv[]) {
	char str1[10], str2[10];
	int result = 0;
	while (scanf("%s %s", str1, str2) != EOF) {
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		for (int i = 0; i < len1; i++) {
			for (int j = 0; j < len2; j++) {
				result += ((str1[i] - '0') * (str2[i] - '0'));
			}
		}
		printf("%d", result);
	}
}