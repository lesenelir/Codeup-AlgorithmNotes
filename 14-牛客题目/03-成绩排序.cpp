#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct student {
	char name[1000];
	int score;
	int num; //用于标记录入先后
}stu[1000];

bool cmp0(student a, student b) {
	if (a.score != b.score) return a.score > b.score; //分数从高到低
	else return a.num < b.num;
}

bool cmp1(student a, student b) {
	if (a.score != b.score) return a.score < b.score; //分数从低到高
	else return a.num < b.num;
}

int main() {
	int n, m;
	while(scanf("%d", &n) != EOF) {
		scanf("%d", &m);
		for (int i = 0; i < n; i++) {
			scanf("%s %d", stu[i].name, &stu[i].score);
			stu[i].num = i;
		}
		if ( m == 0) {
			sort(stu, stu+n, cmp0);
		} else {
			sort(stu, stu+n, cmp1);
		}
		for (int i = 0; i < n; i++) {
			printf("%s %d\n", stu[i].name, stu[i].score);
		}
	} 
	return 0;
}