#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct student{
	int id;
	char name[1001];
	char sex[1001];
	int age;
}buf[1001];

int main() {
	int n;
	int array[1000];
	memset(array, -1, sizeof(array));
	while(scanf("%d", &n) != EOF) {
		for(int i = 0; i < n; i++) {
			scanf("%d %s %s %d", &buf[i].id, buf[i].name, buf[i].sex, &buf[i].age);
		}
		int m;
		scanf("%d", &m);
		for(int i = 0; i < m; i++) {
			scanf("%d", &array[i]);
		}
		int flag;
		for(int i = 0; i < m; i++) {
			flag = 0;
			for(int j = 0; j < n; j++) { //在内层循环查找
				if(array[i] == buf[j].id) {
					printf("%d %s %s %d\n", buf[j].id, buf[j].name, buf[j].sex, buf[j].age);
					flag = 1;
				}
			}
			if(flag != 1) printf("No Answer!\n");
		}
	}
	
	return 0;
}