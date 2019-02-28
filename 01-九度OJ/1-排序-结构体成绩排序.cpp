#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct student{
	char name[10];
	int age;
	int score;
}stu[100];

bool cmp(student a, student b) {
	if (a.score != b.score) return a.score < b.score;
	
	int tmp = strcmp(a.name, b.name);
	if (tmp != 0) return tmp < 0;
	
	else return a.age < b.age;
}


int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	while (n > 0) {
		for (int i = 0; i < n; i++) {
			scanf("%s %d %d", stu[i].name, &stu[i].age, &stu[i].score);
		}
		sort(stu, stu+n, cmp);
		for (int i = 0; i < n; i++) {
			printf("%s %d %d\n", stu[i].name, stu[i].age, stu[i].score);
		}
		n--;
	}
}