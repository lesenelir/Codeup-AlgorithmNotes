#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	int M;
	while (scanf("%d", &M) != EOF) {
		while (M--) {
			char str[1001];
			scanf("%s", str);
			int len = strlen(str);
			
			int a[1001], cnt = 0;
			for (int i = 0; i < len; i++) {
				a[cnt++] = str[i] - '0';
			}
			int flag = 0;
			for (int i = 1; i < cnt; i++) {
				if (a[i] != 0) {
					flag = 1;
				}
			}
			if (flag == 1 && a[1] != 0) {
				for (int i = 1; i < cnt; i++) {
					printf("%d", a[i]);
				}
			} else if (flag == 1 && a[1] == 0) {
				for (int i = 2; i < cnt; i++) {
					printf("%d", a[i]);
				}
			} else {
				printf("0");
			}
			printf("\n");
			
		}
	}
}