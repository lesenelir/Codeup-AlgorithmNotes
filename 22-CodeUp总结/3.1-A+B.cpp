#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	char str1[1001], str2[1001];
	while (scanf("%s %s", str1, str2) != EOF) {
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		int a = 0;
		int b = 0;
		for (int i = 0; i < len1; i++) {
			if (str1[i] >= '0' && str1[i] <= '9') {
//				a = a + (str1[i]-'0') * pow(10.0, len1-i-1);
				a = a*10 + str1[i] - '0'; //字符串内的数字转成int关键步骤，切记
			}
		}
		if (str1[0] == '-') {
			a = -a;
		}
		for (int i = 0; i < len2; i++) {
			if (str2[i] >= '0' && str2[i] <= '9') {
//				b = b + (str2[i]-'0') * pow(10.0, len2-i-1);
				b = b*10 + str2[i] - '0';
			}
		}
		if (str2[0] == '-') {
			b = -b;
		}
		
		int sum = a + b;
		printf("%d\n", sum);
	}
}