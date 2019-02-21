#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}
int main(int argc, char *argv[]) {
	int a[10][10];
	int sum;
	int m;
	int result[10]; //保存所有和的元素值
	int n = 0;
	scanf("%d", &m);
	//记录所有的方阵元素的值
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	//记录行的元素之和
	for (int i = 0; i < m; i++) {
		sum = 0;
		for (int j = 0; j < m; j++) {
			sum = sum + a[i][j];
		}
		result[n] = sum;
		n++;
	}
	//记录列的元素之和
	for (int j = 0; j < m; j++) {
		sum = 0;
		for (int i = 0; i < m; i++) {
			sum = sum + a[i][j];
		}
		result[n] = sum;
		n++;
	}
	//记录主对角线元素之和
	sum = 0;
	for (int i = 0; i < m; i++) {
		sum = sum + a[i][i];
	}
	result[n] = sum;
	n++;
	//记录副对角线元素之和
	sum = 0;
	for (int i = 0;i < m; i++) {
		sum = sum + a[i][m-i-1];
	}
	result[n] = sum;
	n++;
	
	sort(result, result + n, cmp);
	
	for (int i = 0; i < n; i++) {
		printf("%d ", result[i]);
	}	
}