#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]) {
	char str[1001];
	while (scanf("%s", str) != EOF) {
		int len = strlen(str);
		sort(str, str+len);
//		for (int i = 0; i <len; i++) {
//			int count = 0;
//			for (int j = i;j < len; j++) {
//				if (str[i] == str[j]) {
//					count++;
//				}
//			}
//			printf("%c %d\n", str[i], count);
//		}
		int count = 1;
		for (int i = 0; i < len; i++) {
			if (str[i] != str[i+1]) {
				printf("%c %d\n", str[i], count);
				count = 1;
			} else {
				count++;
			}
		}
	}
}