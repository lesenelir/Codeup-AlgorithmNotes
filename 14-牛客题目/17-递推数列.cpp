#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int a0, a1, p, q, k;
	while(scanf("%d %d %d %d %d", &a0, &a1, &p, &q, &k) != EOF) {
		int res = 0;
		for(int i = 2; i <= k; i++) {
			res = (q * a0 + p * a1) % 10000;
			a0 = a1;
			a1 = res;
		}    
		printf("%d", res);
	}
}