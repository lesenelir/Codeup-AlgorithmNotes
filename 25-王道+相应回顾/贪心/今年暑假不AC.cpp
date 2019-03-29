#include <iostream>

using namespace std;

struct program {
	int s;
	int e;
}buf[1001];

bool cmp(program a, program b) {
	if (a.s != b.s) return a.s > b.s;
	else return a.e < b.e;
}

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &buf[i].s, &buf[i].e);
		}
		sort(buf, buf+n, cmp);
//		int ans = 0, currentTime = 0;
//		for (int i = 0; i < n; i++) {
//			if (currentTime <= buf[i].s) {
//				currentTime = buf[i].e;
//				ans++;
//			}
//		}
		int ans = 1, lastS = buf[0].s;
		for (int i = 1; i < n; i++) {
			if (buf[i].e <= lastS) { //区间右端点在lastS左边
				lastS = buf[i].s;
				ans++;
			}
		}
		printf("%d\n", ans);
	}
}