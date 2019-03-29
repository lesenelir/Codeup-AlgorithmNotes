#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]) {
	int n;
	int b[3];
	while (scanf("%d", &n) != EOF) {
		int count = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n-i; j++) {
				int k = n-i-j;
				if(k < j) continue; //去重复
				b[0] = i;
				b[1] = j; 
				b[2] = k;
				sort(b, b+3);
				if (b[0]+b[1] > b[2]) {
					printf("%d %d %d\n", i , j, k);
					count++;
				}
			}
		}
		printf("%d\n", count);
		
		
	}
	
}