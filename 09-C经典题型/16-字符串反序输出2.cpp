#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	char str[1000];
	scanf("%s", str);
	int len = strlen(str);
	
	for (int i = 0; i < len / 2; i++) {
		char temp;
		temp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;
	}	
	puts(str);
	
}