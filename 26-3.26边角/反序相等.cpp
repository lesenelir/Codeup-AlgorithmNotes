#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	for(int i = 1000; i <= 9999; i++) {
		char str[100001];
		sprintf(str, "%d", i);
		reverse(str, str+4);
		int res;
		sscanf(str, "%d", &res);
		if(i*9 == res) {
			printf("%d\n", i);
		}
	}
	
	
	return 0;
}