#include <cstdio>
#include <cstring>

const int MaxSize = 60;

int main(int argc, char *argv[]) {
	char str1[MaxSize], str2[MaxSize];
	char temp[MaxSize];
	int a, b, r;
	while (scanf("%s %s", str1, str2) != EOF) { // gets(str1, str2) != NULl
		memset(temp, 0, sizeof(temp));
		r = 0;
		for (int i = 0; i < strlen(str1); i++) {
			if (str1[i] != ',') {
				temp[r++] = str1[i];   // 此时temp数组已经保存了str1中的所有数字
			}
		}
		sscanf(temp, "%d", &a);   // 把字符数组temp中的内容以%d的格式写到a中
		
		memset(temp, 0, sizeof(temp));
		r = 0;
		for (int i = 0; i < strlen(str2); i++) {
			if (str2[i] != ',') {
				temp[r++] = str2[i];
			}
		}
		sscanf(temp, "%d", &b);
		
		printf("%d", a+b);
	}
}
