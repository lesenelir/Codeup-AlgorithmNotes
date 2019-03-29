#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	char str[1001];
	int count = 0;
	int flag;
	while (scanf("%s", str) != EOF) {
		int len = strlen(str);
		count = 0;
		for (int i = 0; i < len; i++) {
			for (int j = i; j < len; j++) {
				flag = 1;
				for (int k = 0; k < (j-i+1)/2; k++) {
					if (str[i] != str[j-k]) {
						flag = 0;
					}
				}	
				if (flag == 1) {
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
}