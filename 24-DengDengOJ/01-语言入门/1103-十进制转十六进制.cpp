#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	char str[1001];
	while (scanf("%s", str) != EOF) {
		int len = strlen(str);
		int ans = 0, bit = 1;
		for (int i = len-1; i >= 0; i--) {
			if (str[i] >= 'A' && str[i] <= 'F') {
				ans = ans + (str[i] - 'A' + 10) * bit;
			} else {
				ans = ans + (str[i] - '0') * bit;
			}
			bit = bit * 16;
		}
		printf("%d\n", ans);
	}
}