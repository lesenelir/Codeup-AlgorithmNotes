#include <iostream>

using namespace std;

struct student {
	int id;
	char name[1001];
	char sex[1001];
	int age;
}stu[1001];


int main(int argc, char *argv[]) {
	int m;
	while (scanf("%d", &m) != EOF) {
		while (m != 0) {
			int n;
			for (int i = 0; i < n; i++) {
				scanf("%d %s %s %d", &stu[i].id, stu[i].name, stu[i].sex, &stu[i].age);
			}
			int x;
			scanf("%d", &x);
			for (int i = 0; i < n; i++) {
				if (stu[i].id == x) {
					printf("%d %s %s %d", stu[i].id, stu[i].name, stu[i].sex, stu[i].age);
					break;
				}
			}
			
			m--;
		}
	}
	
}