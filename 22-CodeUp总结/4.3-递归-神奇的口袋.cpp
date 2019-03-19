#include <iostream>

using namespace std;

int n;
int a[1001];
//count(i, sum):数组第i开始往后统计的组合数和为sum的种类数
int count(int i, int sum) {
	if(sum == 0) return 1;
	if(i == n || sum < 0) return 0; // 边界：i==n表示没有其他数来组合，sum < 0表示组合不出来
	return count(i+1, sum-a[i]) + count(i+1, sum); //从i开始包含a[i],不包含a[i]
}

int main(int argc, char *argv[]) {
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		printf("%d\n", count(0, 40));	
	}
}