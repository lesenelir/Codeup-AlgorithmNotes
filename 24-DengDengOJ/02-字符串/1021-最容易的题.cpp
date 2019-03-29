#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	char str[1001];
	while (gets(str) != NULL) {
		int flag = 0;
		int len = strlen(str);
		for (int i = 0; i < len; i++) {
			if (str[i] == 'E') {
				for (int j = i; j < len; j++) {
					if (str[j] == 'A') {
						for (int k = j; k < len; k++) {
							if (str[k] == 'S') {
								for (int l = k; l < len; l++) {
									if (str[l] == 'Y') {
										flag = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (flag == 1) {
			printf("easy\n");
		} else {
			printf("difficult\n");
		}
		
	}
}