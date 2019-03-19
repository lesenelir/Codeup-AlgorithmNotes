#include <iostream>
#include <cstring>

using namespace std;

void vowles(char str1[], char str2[]) {
	int len1 = strlen(str1);
	int cnt = 0;
	for (int i = 0; i < len1; i++) {
		if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U') {
			str2[cnt++] = str1[i];
		}
	}
}



int main(int argc, char *argv[]) {
	char str1[100], str2[100];
	gets(str1);
	vowles(str1, str2);
	puts(str2);
}