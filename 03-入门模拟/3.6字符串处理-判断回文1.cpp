#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	char str[20];
	scanf("%s", str);
	int len = strlen(str);
	int flag = 1;
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len-i-1]) {
			flag = 0;
			break;
		} 
	}	
	if (flag == 1) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}