#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct node{
	int x;
	int y;
}buf[1001];

bool cmp(node a, node b) {
	if(a.x != b.x) return a.x < b.x;
	else return a.y < b.y;
}

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		for(int i = 0; i < n; i++) {
			scanf("%d %d", &buf[i].x, &buf[i].y);
		}
		sort(buf, buf+n, cmp);
		printf("%d %d\n", buf[0].x, buf[0].y);	
	}
	
	return 0;
}