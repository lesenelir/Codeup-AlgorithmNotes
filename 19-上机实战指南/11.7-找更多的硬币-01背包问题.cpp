#include <iostream>
#include <algorithm>
using namespace std;

int w[1001], dp[1001];
bool choice[1001][1001], flag[1001];

bool cmp(int a, int b) {
	return a > b;
}

int main(int argc, char *argv[]) {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &w[i]);
	}
	sort(w+1, w+1+n, cmp);
	//
	for (int i = 1; i <= m; i++) {
		dp[i] = 0;
	}
	//
	for (int i = 1; i <= m; i++) {
		for (int v = m; v >= w[i]; v--) {
			if (dp[v] <= dp[v-w[i]] + w[i]) {
				dp[v] = dp[v-w[i]] + w[i];
				choice[i][v] = 1; //放入物品
			}
			else choice[i][v] = 0;
		}
	}
	if (dp[m] != m) {
		printf("NO Solution");
	} else {
		int k = n, num = 0, v = m;
		while (k >= 0) {
			if (choice[k][v] == 1) {
				flag[k] = true;
				v -= w[k];
				num++;
			} else {
				flag[k] = false;
			}
			k--;
		}
		//
		for (int i = n; i >= 1; i--) {
			if (flag[i] == true) {
				printf("%d", w[i]);
				num--;
				if (num > 0) printf(" ");
			}
		}
	}
}