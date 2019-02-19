#include <cstdio>

int main(int argc, char *argv[]) {
	int n;
	int school[100000];
	int id, score;
	// 输入
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &id, &score);
		school[id] = school[id] + score; //id放入school数组里
	}
	// 遍历数组找最值，k为id
	int k = 0, max = 0;
	for (int i = 0; i < n; i++) {
		if (school[i] > max) {
			k = i;
			max = school[i];
		}
	}
	// 输出
	printf("%d %d", k, max);
}