#include <iostream>

using namespace std;

int Partition(int a[], int left, int right) {
	int temp = a[left];
	while (left < right) {
		while (left < right && a[right] > temp) right--;
		a[left] = a[right];
		while (left < right && a[left] < temp) left++;
		a[right] = a[left];
	}
	a[left] = temp;
	return left;
}

void quickSort(int a[], int left, int right) {
	if (left < right) {
		//将[left,right]按a[left]一分为二
		int pos = Partition(a, left, right);
		quickSort(a, left, pos-1);
		quickSort(a, pos+1, right);
	}
}

int main(int argc, char *argv[]) {
	
}