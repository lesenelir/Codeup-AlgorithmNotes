#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a[101][101];
	int n;
	while(scanf("%d", &n) != EOF) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < i; j++) { //关键步骤容易错，此处j < i 表示以对角线为边界转置元素
				int t;
				t = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = t;
			}
		}
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}