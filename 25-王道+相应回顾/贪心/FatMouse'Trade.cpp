#include <iostream>

using namespace std;

struct goods{
	double j; //物品总重
	double f; //物品总价值
	double s; //物品性价比
}buf[1001];

bool cmp(goods a, goods b) { //物品按照性价比降序排序
	return a.s > b.s;
}

int main(int argc, char *argv[]) {
	double m; //钱
	int n;
	while (scanf("%lf %d", &m, &n) != EOF) {
		if (m == -1 && n == -1) break;
		for (int i = 0; i < n; i++) {
			scanf("%lf %lf", &buf[i].j, &buf[i].f);
			buf[i].s = buf[i].j / buf[i].f; //计算性价比
		}
		sort(buf, buf+n, cmp);
		int idx = 0;
		double ans = 0; //累加所能得到总重量
		while (m > 0 && idx < n) { //有物品剩余(idx < n)
			if (m > buf[idx].f) {
				ans = ans + buf[idx].j;
				m = m - buf[idx].f;
			} else {
				ans = ans + buf[idx].j * m / buf[idx].f;
				m = 0;
			}
			idx++;
		}
		printf("%.3lf\n", ans);
	}
}