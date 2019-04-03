#include <iostream>

using namespace std;
int number = 1;
int step = 1;

int way(int a[100][100], int n) {
	int c_start, r_start;
	int i, count = 0;
	c_start = r_start = n / 2;
	a[c_start][r_start] = number;
	while(1) {
		if (step % 2 != 0) {
			i = 0;
			while(i != step) {//右移动
				c_start++;
				number++;
				a[r_start][c_start] = number;
				count++;
				i++;
				if (count == n*n) return 1;
			}
			i = 0;
			while(i != step) {//上移动
				r_start--;
				number++;
				a[r_start][c_start] = number;
				count++;
				i++;
			}
			step++;
		} else if (step % 2 == 0) {
			i = 0;
			while(i != step) {//左移动
				c_start--;
				number++;
				a[r_start][c_start] = number;
				count++;
				i++;
				if (count == n*n) break;
			}
			i = 0;
			while(i != step) {//下移动
				r_start++;
				number++;
				a[r_start][c_start] = number;
				count++;
				i++;
			}
			step++;
		}
	}
}

int duijiaoxian(int a[100][100], int n) {
	int result = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i == j || i+j == n) result = result + a[i][j];
		}
	}
	return result;
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int a[100][100];
	way(a, n);
	int result = duijiaoxian(a, n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("%d", result);
}