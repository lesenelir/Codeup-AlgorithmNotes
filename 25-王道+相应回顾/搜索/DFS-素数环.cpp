#include <iostream>
#include <cstring>
using namespace std;

//int prime[100], PNum = 0;
int a[22];//储存并更新排序后的数的序列
int visit[22];
//int m;//m表示当前所判断的数是第几个数
int n;

bool isprime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void dfs(int x) {
	if (x == n && isprime(1+a[n-1])) { //当dfs到达最后一个点 如果最后一个元素+1是素数
		printf("%d ",a[0]);
		for (int i = 1; i < n; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
	} else {
		for (int i = 2; i <= n; i++) {
			if (!visit[i] && isprime(i+a[x-1])) {
				a[x] = i;//将i存储开始判断下一个数
				visit[i] = 1;//标记i已经用过
				dfs(x+1);//继续对下一个数进行判断
				visit[i] = 0;//清楚标记
			}
		}
	}
	
}

int main(int argc, char *argv[]) {
	int k = 1;
	while (scanf("%d", &n) != EOF) {
		printf("Case %d:\n",k++);
		if (n == 1) {
			printf("1\n");
		} else if (n % 2 != 0){
			printf("No Answer\n");
		} else {
			a[0] = 1;
			memset(visit, 0, sizeof(visit));
			dfs(1);
		}
		
	}
}