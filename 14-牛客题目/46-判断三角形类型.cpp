#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
	较小两边平方 等于 第三边平方 ====>直角三角形
	较小两边平方 大于 第三边平方 ====>锐角三角形
	较小两边平方 小于 第三边平方 ====>钝角三角形
*/
int main() {
	int buf[3];
	while(scanf("%d %d %d", &buf[0], &buf[1], &buf[2]) != EOF) {
		sort(buf,buf+3);
		int a = buf[0], b = buf[1], c = buf[2];
		if (a*a + b*b == c*c ) {
			cout << "直角三角形" << endl;
		}else if (a*a + b*b < c*c ) {
			cout << "钝角三角形" << endl;
		}else{
			cout << "锐角三角形" << endl;
		}
	}
	return 0;
}