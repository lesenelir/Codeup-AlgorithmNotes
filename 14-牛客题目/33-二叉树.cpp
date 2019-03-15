#include <iostream>
#include <cstdio>
using namespace std;

int DFS(int m, int n) {
	if(m > n) return 0; //m已经到n结点后面的空结点了
	else return DFS(2*m, n) + DFS(2*m+1, n) + 1;
}

int main() {
	int n, m;
	while(scanf("%d %d", &m, &n) != EOF) {
		if(m == 0 && n == 0) break;
		int res = DFS(m, n);
		printf("%d\n", res);
	}
	
	return 0;
}