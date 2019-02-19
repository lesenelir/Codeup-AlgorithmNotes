#include <iostream>
#include <cstring>
using namespace std;

void change(char p[30], char c){
	for (int i = 0; i < strlen(p); i++) {
		if (p[i] == c) {
			strcpy(p + i, p + i + 1); // 后面的字符串赋给前面的字符串
		}
	}
}

int main(int argc, char *argv[]) {
	char str[30], c;
	scanf("%s \n %c", str, &c);
	change(str, c);
	printf("%s", str);
}