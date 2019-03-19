#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char *argv[]) {
	char strA[100], strB[100];
	int A, B;
	while (scanf("%s %d %s %d", strA, &A, strB, &B) != EOF) {
		int lenA = strlen(strA);
		int lenB = strlen(strB);
		int a = 0, b = 0; //统计待测数字在字符数组中出现的次数
		for (int i = 0; i < lenA; i++) {
			if ((strA[i]-'0') == A) {
				a++;
			}
		}
		for (int i = 0; i < lenB; i++) {
			if ((strB[i]-'0') == B) {
				b++;
			}
		}
		int PA = 0, PB = 0;
		for (int i = 0; i < a; i++) {
			PA = PA*10 + A; //字符数组转为数字的关键步骤
		}
		for (int i = 0; i < b; i++) {
			PB = PB*10 + B;
		}
		
		int res = PA + PB;
		printf("%d\n", res);
	}
}