#include <iostream>

using namespace std;

const int maxn = 1000;
//合并操作，将两个区间合并成一个区间，此时L2=R1+1
void merge(int a[], int L1, int R1, int L2, int R2) {
	int i = L1, j = L2;
	int temp[maxn], index;
	while (i <= R1 && j <= R2) {
		if (a[i] <= a[j]) {
			temp[index++] = a[i++];
		} else {
			temp[index++] = a[j++];
		}
	}
	while (i <= R1) { // 关于j数组已经全部合并完
		temp[index++] = a[i++];
	}
	while (j <= R2) {
		temp[index++] = a[j++];
	}
	for (int i = 0; i < index; i++) { //合并后的序列重新返回数组A
		a[L1 + i] = temp[i]; 
	}
}
//归并排序递归版本
void mergesort(int a[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		mergesort(a,left, mid);
		mergesort(a, mid+1, right);
		merge(a, left, mid, mid+1, right);
	}
}
int main(int argc, char *argv[]) {
			
}