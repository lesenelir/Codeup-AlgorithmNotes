#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 1000000;
int A[maxn], B[maxn];
int C[maxn], cnt = 0;

int main() {
	int n, m;
	while(scanf("%d %d", &n, &m) != EOF) {
		for(int i = 0; i < n; i++) {
			scanf("%d", &A[i]);
		}
		for(int i = 0; i < m; i++) {
			scanf("%d", &B[i]);
		}
		int a, b, c, d;
		scanf("%d %d", &a, &b);
		scanf("%d %d", &c, &d);
		
		for(int i = a-1; i <= b-1; i++) {
			C[cnt++] = A[i];
		}
		for(int i = c-1; i <= d-1; i++) {
			C[cnt++] = B[i];
		}
		
		if(cnt % 2 != 0) {
			printf("%d\n", C[cnt/2]);
		} else {
			printf("%d\n", C[cnt/2-1]);
		}
		
	}
	
	return 0;
}