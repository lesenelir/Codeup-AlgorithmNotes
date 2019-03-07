#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int n = 10;
bool cmp(int a, int b) {
	return a > b;
}

int main() {
	int a[n];
	while(scanf("%d", &a[0]) != EOF) {
		for(int i = 1; i < n; i++) {
			scanf("%d", &a[i]);   //此处的直接输入十个数字，需要学习。即先输入a[0]，然后循环后面的输入
		}
		int j[100], num = 0;
		int o[100], cnt = 0;
		for(int i = 0; i < n; i++) {
			if(a[i] % 2 == 0) {
				o[cnt++] = a[i];
			} else {
				j[num++] = a[i];
			}
		}
		sort(j, j+num,cmp);
		sort(o, o+cnt);
		for(int i = 0 ; i < num; i++) {
			printf("%d ", j[i]);
		}
		for(int i = 0; i < cnt; i++) {
			printf("%d ", o[i]);
		}
		
	}
	return 0;
}
