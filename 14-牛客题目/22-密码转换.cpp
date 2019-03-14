#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	char str[1000];
	while(gets(str) != NULL) {
		int len = strlen(str);
		for(int i = 0; i < len; i++) {
			if(str[i] >= 'a' && str[i] <= 'y') {
				str[i]++;
			} else if(str[i] >= 'A' && str[i] <= 'Y') {
				str[i]++;
			} else if(str[i] == 'z') {
				str[i] = 'a';
			} else if(str[i] == 'Z') {
				str[i] = 'A';
			}
		}
		puts(str);
	}
	return 0;
}