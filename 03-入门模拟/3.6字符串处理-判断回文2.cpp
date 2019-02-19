#include <iostream>
#include <cstdio>
using namespace std;
bool judge(char str[]) {
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len-1-i]) {
			return false;
		}
	}
	return true;
}

int main(int argc, char *argv[]) {
	char str[20];
	gets(str);
	bool flag = judge(str);
	if (flag == true) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}