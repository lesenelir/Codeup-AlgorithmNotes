#include <iostream>

using namespace std;

int binarySearch(int a[], int left, int right, int x) {
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (a[mid] == x) return mid;
		else if(a[mid] > x) right = mid - 1;
		else left = mid + 1;
	}	
	return -1;
}

int main(int argc, char *argv[]) {
	const int n = 10;
	int a[n] = {1, 3, 4, 6, 7, 8, 10, 11, 12, 15};
	printf("%d %d", binarySearch(a, 0, n-1, 6), binarySearch(a, 0, n-1, 9));	
}