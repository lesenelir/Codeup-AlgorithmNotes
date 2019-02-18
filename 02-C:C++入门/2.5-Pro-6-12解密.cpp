#include <cstdio>
#include <cstring>

int main(int argc, char *argv[]) {
//	char str1[26] = {'A','B','C','D','E','F','G','H','I','J','K',
//					'L','M','N','O','P','Q','R','S','T','U','V','W',
//					'X','Y','Z'};
//	char str2[26] = {'a','b','c','d','e','f','g','h','i','j','k',
//					'l','m','n','o','p','q','r','s','t','u','v','w',
//					'x','y','z'};
	char str[20];
	gets(str);
	
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] >='A' && str[i] <= 'Z') {
			str[i] = 'Z' - (str[i] - 'A');
		} else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = 'z' - (str[i] - 'a');
		}
	}
	
	puts(str);
	
}