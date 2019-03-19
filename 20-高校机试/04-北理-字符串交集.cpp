#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char *argv[]) {
	char str1[100], str2[100];
	while (scanf("%s %s", str1, str2) != EOF) {
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		char str3[101];
		int cnt = 0;
		for (int i = 0; i < len1; i++) {
			for (int j = 0; j < len2; j++) {
				if (str1[i] == str2[j]) {
					str3[cnt++] = str1[i];
					break; //找到即跳出从2数组中找与1数组相等的元素
				}
			}
		}
		//输出3数组
		for (int i = 0; i < cnt; i++) {
			printf("%c", str3[i]);
		}
	}
}