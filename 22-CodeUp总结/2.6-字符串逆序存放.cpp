#include <iostream>
#include <cstring>
using namespace std;

void reverse_char(char str[], int n) {
	for (int i = 0; i < n / 2; i++) {
		int temp = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = temp;	
	}
	
}

int main(int argc, char *argv[]) {
	char str[1001];
	gets(str);
	int len = strlen(str);
	reverse_char(str,len);
	puts(str);
		
}