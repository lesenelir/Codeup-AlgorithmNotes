#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	char str[1001];
	int count = 1;
	while (gets(str) != NULL) {
		int len = strlen(str);
		bool flag = true;
		for (int i = 0; i < len; i++) {
			if (str[i] != str[len-i-1]) {
				flag = false;
			}
		}
		if (flag == true) {
			printf("case%d: yes\n", count);
		} else {
			printf("case%d: no\n", count);
		}
		count++;
	}
}