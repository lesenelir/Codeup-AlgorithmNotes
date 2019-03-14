#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, m;
	while(scanf("%d %d", &n, &m) != EOF) {
		int a[1001];
		for(int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
		}
		
		for(int i = 1; i <= n; i++) {
			int count = 0;
			//int flag = 0;
			for(int j = 1; j <= n; j++) {
				if(a[j] == a[i]) {
					count++;
					//flag = 1;
				}
			}
//			if(flag == 1) printf("%d\n", count);
//			if(flag != 1) printf("BeiJu\n");
			if(count != 1) printf("%d\n", count-1);//相等的时候会重复计数一次，所以要减去1
			if(count == 1) printf("BeiJu\n");
		}
	}
	return 0;
}