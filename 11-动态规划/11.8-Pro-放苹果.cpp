#include <iostream>

using namespace std;

int f(int m, int n) {
	if (n == 1 || m == 0) {
		return 1;
	}
	if (n > m) {
		return f(m, m);
	}
	return f(m, n-1) + f(m-n, n);
}


int main(int argc, char *argv[]) {
	int t;
	scanf("%d", &t);
	while (t > 0) {
		int M, N;
		scanf("%d %d", &M, &N);
		int res = f(M,N);
		printf("%d\n", res);
		t--;
	}
}