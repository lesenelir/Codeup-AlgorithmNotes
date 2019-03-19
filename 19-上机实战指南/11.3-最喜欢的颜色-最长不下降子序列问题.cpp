#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int m;
		scanf("%d", &m);
		//存储喜欢的颜色
		int LikeTable[100]; 
		for (int i = 0; i < m; i++) {
			scanf("%d", &LikeTable[i]);
		}
		//sort(LikeTable, LikeTable+m);
		//存储总共带子的颜色
		int L;
		scanf("%d", &L);
		int BeltTable[100];
		for (int i = 0; i < L; i++) {
			scanf("%d", &BeltTable[i]);
		}
		//总共带子颜色除去不喜欢的颜色
		int A[100], num = 0;
		for (int i = 0; i < L; i++) {
			for (int j = 0; j < m; j++) {
				if (BeltTable[i] == LikeTable[j]) {
					A[num++] = LikeTable[j];
					break; //如果BeltTable数组中的元素i能在LikeTable中找到喜欢的元素，则跳出，否则将会重复计数；
				}
			}
		}
		for (int i = 0; i < num; i++) {
			printf("%d ", A[i]);
		}
		
		//sort(A, A+num); //将带子按照非递减排序
		//以下进行最长不下降子序列操作
		int dp[100];
		//边界
		for (int i = 0; i < num; i++) {
			dp[i] = 1;
		}
		//状态转移方程
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < i; j++) {
				if(A[j] <= A[i] && dp[j] + 1 > dp[i]) {
					dp[i] = dp[j] + 1;
				}
			}
		}
		//找出最大值
		int res = 0;
		for (int i = 1; i < num; i++) {
			if (dp[i] > dp[res]) {
				res = i;
			}
		}
		printf("%d\n", dp[res]);
		
	}
}