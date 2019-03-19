#include <iostream>
#include <algorithm>
using namespace std;

struct program{
	int start;
	int end;
}buf[1001];

bool cmp(program a, program b) {
	if (a.start != b.start) {
		return a.start > b.start;
	}
	return a.end < b.end;
}

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		if(n == 0) break;
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &buf[i].start, &buf[i].end);
		}	
		sort(buf, buf+n, cmp);
		int res = 1, last = buf[0].start;
		for (int i = 0; i < n; i++) {
			if (buf[i].end <= last) {
				last = buf[i].start;
				res++;
			}
		}
		printf("%d\n", res);
	}
	
}