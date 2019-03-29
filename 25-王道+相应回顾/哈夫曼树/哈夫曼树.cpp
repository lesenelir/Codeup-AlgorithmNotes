#include <iostream>
#include <queue>
using namespace std;

//优先队列，小顶堆
priority_queue<int, vector<int>, greater<int> > Q;

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		while (Q.empty() == false) Q.pop();
		for (int i = 0; i < n; i++) {
			int x;
			scanf("%d", &x);
			Q.push(x);
		}
		int ans = 0;
		while (Q.size() > 1) { //当堆中元素大于1个
			int a = Q.top();
			Q.pop();
			int b = Q.top();
			Q.pop();
			ans = ans + (a+b);
			Q.push(a+b); //双亲节点放回堆中
		}
		printf("%d\n", ans);
	}
}