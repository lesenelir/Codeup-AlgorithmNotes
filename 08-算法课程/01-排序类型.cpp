#include <iostream>

using namespace std;


//冒泡排序
void bubblesort(int a[], int n) {
	for (int i = 1; i < n; i++) { //进行n-1趟排序
		for (int j = 0; j < n-i; j++) { //每趟排序比较n-i次
			if (a[j] > a[j+1]) {
				int temp = a[j]; 
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

//选择排序
void selectsort(int a[], int n) {
	for (int i = 0; i < n; i++) { //总共进行n趟排序
		int k = i; //变量k存储最小值的数组下标
		for (int j = i; j < n; j++) { //从[1,n]中找出最小元素
			if (a[j] < a[k]) {
				k = j; //小的赋值给K
			}
		}
		//此时已经找到最小值元素a[k],交换a[k]与a[i]
		int temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	}
}

//插入排序
void insertsort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int temp = a[i], j = i-1; //temp是待排关键字,j是有序表的最后一个元素
		//循环待排关键字之前的有序表
		while (j>= 0 && temp < a[j]) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
}

//快速排序
int paration(int a[], int left, int right) {
	int temp = a[left];
	while (left < right) {
		while (left < right && a[right] > temp) right--;
		a[left] = a[right];
		while (left < right && a[left] < temp) left++;
		a[right] = a[left];
	}
	a[left] = temp; //temp放到left与right相遇的地方
	return left;
}

void quicksort(int a[], int left, int right) {
	if (left < right) {
		int pos = paration(a, left, right);
		quicksort(a, left, pos-1);
		quicksort(a, pos+1, right);
	}
}


int main(int argc, char *argv[]) {
	int a[5] = {5, 4,3,1,2};
	quicksort(a, 0, 4);
	for (int i = 0; i < 5; i++) {
		printf ("%d ", a[i]);
	}
}