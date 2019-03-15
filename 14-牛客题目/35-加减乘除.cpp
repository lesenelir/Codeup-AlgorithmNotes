#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, b;
	char c;
	while(scanf("%d", &a) != EOF) {
		scanf("%c", &c);
		if(c == '!') {
			int ans = 1;
			for(int i =1; i <= a; i++) {
				ans = ans * i;
			}
			printf("%d\n", ans);
		} else {
			scanf("%d", &b);
			if(c == '+') printf("%d\n", a+b);
			else if(c == '-') printf("%d\n", a-b);
			else if(c == '*') printf("%d\n", a*b);
			else if(c == '/') {
				if(b == 0) {
					printf("error\n");
				} else {
					printf("%d\n", a/b);
				}
			}
			else if(c == '%') {
				if(b == 0) {
					printf("error\n");
				} else {
					printf("%d\n", a%b);
				}
			}
		}
		
	}

	return 0;
}