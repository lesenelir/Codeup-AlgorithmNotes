#include <iostream>

using namespace std;

struct program {
	int stratTime;
	int endTime;
}buf[100];

bool cmp(program a, program b) {
	return a.endTime < b.endTime;
}

/*优先选择结束时间最早的节目*/
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &buf[i].stratTime, &buf[i].endTime);
		}
		sort(buf, buf+n, cmp); //按照结束时间从小到大排序
		int currentTime = 0, count = 0;
		for (int i = 0; i < n; i++) {
			if (currentTime <= buf[i].stratTime) { //现在时间小于等于该节目的开始时间(此时已经按照结束时间升序排序)
				currentTime = buf[i].endTime; //现在时间等于结束的时间，意味着已经看过一个电视
				count++;
			}
		}
		printf("%d", count);
	}
}