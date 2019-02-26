#include <iostream>

using namespace std;

void input_num(int a[]) {
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
}

void change_num(int a[]) {
	int max, min, temp, t = 0;
	max = min = a[0];
	for (int i = 0; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
			t = i;
		}
	}
	temp = a[t];
	a[t] = a[9];
	a[9] = temp;
	
	for (int i = 0; i < 10; i++) {
		if (min > a[i]) {
			min = a[i];
			t = i;
		}
	}
	temp = a[t];
	a[t] = a[0];
	a[0] = temp;
}

void print_num(int a[]) {
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
}

int main(int argc, char *argv[]) {
	int a[10] = {0};
	input_num(a);
	change_num(a);
	print_num(a);
}