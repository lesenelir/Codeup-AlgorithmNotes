/*
作者:喵宝宝啊
题目:p2607 图形输出
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char ch;
	while(scanf("%c", &ch) != EOF) {
		int n;
		scanf("%d", &n);
		int a[1001][1001];
		if(ch == 'Z') {
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					printf("*");
				}
				printf("\n");
			}
		}  
		if(ch == 'L') {
			int maxline = 2 * n - 1;
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < maxline/2 - i; j++) {
					printf(" ");
				}
				for(int j = maxline/2 - i; j <= maxline/2 + i; j++) {
					printf("*");
				}
				for(int j = 0; j < maxline/2 - i; j++) {
					printf(" ");
				}
				printf("\n");
			}
			
			for (int i = maxline/2 - 1; i >= 0; i--) {
				for (int j = 0; j < maxline/2 - i; j++) {
					printf(" ");
				}
				for (int j = maxline/2-i; j <= maxline/2 + i; j++) {
					printf("*");
				}
				for (int j = 0; j < maxline/2 - i; j++) {
					printf(" ");
				}
				printf("\n");
			}

		}
}
	return 0;
}