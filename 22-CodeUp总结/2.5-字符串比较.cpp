#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	char s1[100], s2[100];
	while (scanf("%s %s", s1, s2) != EOF) {
		int res = 0;
		for (int i = 0; i < strlen(s1); i++) {
			res += s1[i] - s2[i];
		}
		printf("%d\n", res);
	}
	
}