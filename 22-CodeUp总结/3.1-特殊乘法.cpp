#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	char str1[100], str2[100];
	while (scanf("%s %s", str1, str2) != EOF) {
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		int res[1001], cnt = 0;
		for (int i = 0; i < len1; i++) {
			for (int j = 0; j < len2; j++) {
				res[cnt++] = (str1[i]-'0') * (str2[j]-'0');
			}
		}
		int sum = 0;
		for (int i = 0; i < cnt; i++) {
			sum = sum + res[i];
		}
		printf("%d\n", sum);
	}
}

