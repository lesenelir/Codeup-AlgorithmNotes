#include <iostream>
#include <algorithm>
using namespace std;

int getMax(int a[], int L, int R) {
	if (L == R) { //注意：递归调用要有函数出口
		return a[L];
	}
	int mid = (L + R) / 2;
	int maxLeft = getMax(a, 0, mid);
	int maxRight = getMax(a, mid+1, R);
	return max(maxLeft, maxRight);
}


int main(int argc, char *argv[]) {
	int a[5] = {9 , 11, 2, 5, 3};
	int result;
	result = getMax(a, 0, 4);
	printf("%d ", result);
}