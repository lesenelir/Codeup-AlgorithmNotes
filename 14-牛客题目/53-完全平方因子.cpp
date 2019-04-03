#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		bool flag = false;
		for(int i = 2; i < n; i++) {
			if(i*i % n == 0) {
				flag = true;
			}
		}
		if(flag == true) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	
	return 0;
}