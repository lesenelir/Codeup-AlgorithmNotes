#include <iostream>
#include <cstdio>
using namespace std;
/*
	并查集题目，此题根结点可能会出现环状情况
*/
const int maxn = 100;

int father[maxn];
bool isRoot[maxn]; //记录每一个结点是否作为某个集合的根结点

int findFather(int x) {
	if (x == father[x]) return x;
	else {
		int F = findFather(father[x]);
		father[x] = F;
		return F;
	}
}

void Union(int a, int b) {
	int faA = findFather(a);
	int faB = findFather(b);
	if (faA != faB) {
		father[faA] = faB;
	}
}

void init(int n) {
	for (int i = 0; i < n; i++) {
		father[i] = i;
		isRoot[i] = false;
	}
}

int main(int argc, char *argv[]) {
	int n, m, a, b;
	while (scanf("%d %d", &n, &m) != EOF) {
		init(n);
		for (int i = 0; i < m; i++) {
			scanf("%d %d", &a, &b);
			Union(a, b); //合并a和b所在的集合
		}
		for (int i = 0; i < n; i++) {
			isRoot[findFather(i)] = true;
		}
		int ans = 0; //记录集合数量
		for (int i = 0; i < n; i++) {
			ans += isRoot[i];
		}
		printf("%d\n", ans);
	}
}