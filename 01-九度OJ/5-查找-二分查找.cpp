#include <iostream>

using namespace std;

int binary_search(int a[], int left, int right, int x) {
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (a[mid] == x) return mid;
		else if (a[mid] > x) right = mid - 1;
		else left = mid + 1;
	}
	return -1; //查找失败
}

int main(int argc, char *argv[]) {
	//给数组赋n，必须设定为全局变量
	const int n = 10;
	int a[n] = {1, 3, 4, 6, 7, 8, 10, 11, 12, 15};
	//返回数组下标
	printf("%d %d\n", binary_search(a, 0, n-1, 6), binary_search(a, 0, n-1, 9));
}