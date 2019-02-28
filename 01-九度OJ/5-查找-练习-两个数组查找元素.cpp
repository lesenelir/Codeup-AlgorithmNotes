#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	while(scanf("%d", &n) != EOF){
		int a[100];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]) ;	
		}
		int m;
		scanf("%d",&m);
		int b[100];
		for(int i = 0; i < m; i++){
			scanf("%d",&b[i]);
		}
		//对于一个b元素在a中找，--->双重循环，查找b的元素为外层循环
		int j;
		for(int i = 0; i < m; i++){
			for(j = 0; j < n; j++){
				if(b[i] == a[j]){
					printf("YES\n");
					break;
				}
			}
			if(j == n)	printf("NO\n"); //对于一个数组b的元素来说，当a全部遍历完全，则a中找不到这个元素
		}
	}
}