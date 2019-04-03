#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct student {
	int id;
	char name[1001];
	int score;
}stu[1001];

bool cmp1(student a, student b) {
	return a.id < b.id;
}

bool cmp2(student a, student b) {
	return strcmp(a.name, b.name) <= 0;
}

bool cmp3(student a, student b) {
	if(a.score != b.score) return a.score <= b.score;
	else return a.id < b.id; 
}

int main() {
	int n, C;
	while(scanf("%d %d", &n, &C) != EOF) {
		if(n == 0) break;
		for(int i = 0; i < n; i++) {
			scanf("%d %s %d", &stu[i].id, stu[i].name, &stu[i].score);
		}
		if(C == 1) {
			sort(stu, stu+n, cmp1);
		} 
		if(C == 2) {
			sort(stu, stu+n, cmp2);
		}
		if(C == 3) {
			sort(stu, stu+n, cmp3);
		}
		printf("Case:\n");
		for(int i = 0; i < n; i++) {
			printf("%06d ", stu[i].id);
			printf("%s %d\n", stu[i].name, stu[i].score);
		}
	}
	
	return 0;
}