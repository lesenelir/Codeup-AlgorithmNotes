#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	char str1[10000], str2[10000];
	while(scanf("%s %s", str1, str2) != EOF) {
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		int sum = 0;
		for(int i = 0; i < len1; i++) {
			for(int j = 0; j < len2; j++) {
				sum = sum + (str1[i] - '0') * (str2[j] - '0');
			}
		}
		printf("%d\n", sum);
	}
	
	return 0;
}