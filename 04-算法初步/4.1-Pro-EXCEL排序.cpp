#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct student {
	char num[10];
	char name[10];
	int score;
}stu[1000];

bool cmp1(student a, student b) { //学号递增排序
	return strcmp(a.num, b.num) < 0;
}

bool cmp2(student a, student b) { //姓名递增排序, 若姓名相同则学号递增
	if (strcmp(a.name, b.name)) return strcmp(a.name, b.name) < 0;
	else return strcmp(a.num, b.num);
}

bool cmp3(student a, student b) {
	if (a.score != b.score) return a.score < b.score;
	else return strcmp(a.num, b.num) < 0;
}

int main(int argc, char *argv[]) {
	int m, n, count = 0;
	while (scanf("%d, %d", &m, &n) != EOF) {
		if (m == 0) break;
		for (int i = 0; i < m; i++) {
			scanf("%s %s %d", stu[i].num, stu[i].name, &stu[i].score);
		}
		switch(n) {
			case 1: sort(stu, stu+m, cmp1); break;
			case 2: sort(stu, stu+m, cmp2); break;
			case 3: sort(stu, stu+m, cmp3); break;
		}
		printf("Case %d:\n", ++count);
		for (int i = 0; i < m; i++) {
			printf("%s %s %d\n", stu[i].num, stu[i].name, stu[i].score);
		}
	}
}