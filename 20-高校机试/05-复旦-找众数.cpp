#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[10001];
		int temp[11], cnt = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			temp[a[i]]++; //temp数组下标保存数字,元素值表示该下标元素出现了几次
		}
		//找众数即：找a数组元素值最大的数字，输出下标；若元素值相等，则输出下标较小的数字
		//因为遍历数组是从0开始，若数组元素相等，先前必定已经遍历过了，此时不做处理。
		int max = temp[0], pos;
		for (int i = 0; i < 11; i++) {
			if (max < temp[i]) {
				max = temp[i];
				pos = i;
			}
		}
		printf("%d\n", pos);
	}
}