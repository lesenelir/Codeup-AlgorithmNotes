#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int L, M;
	while(scanf("%d %d", &L, &M) != EOF) {
		int a[10001], num = 0;
		for(int i = 0; i <= L; i++) {
			a[num++] = 1;
		}
		int x, y;
		for(int i = 0; i < M; i++) {
			scanf("%d %d", &x, &y);
			for(int j = x; j <= y; j++) {
				a[j] = 0;
			}
		}
		
		int count = 0;
		for(int i = 0; i <= L; i++) {
			if(a[i] == 1) {
				count++;
			}
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}