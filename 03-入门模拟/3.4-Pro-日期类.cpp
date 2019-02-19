#include <iostream>

using namespace std;

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int y, m, d;
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d %d", &y, &m, &d);
//	}
	while (n--){
		scanf("%d %d %d", &y, &m, &d);
		if (m == 12 && d == 31) {
			y++;
			d = 1;
		} else if (d == month[m]) {
			m++;
			d = 1;
		} else {
			d++;
		}
		printf("%04d-%02d-%02d", y, m, d);
	}
}