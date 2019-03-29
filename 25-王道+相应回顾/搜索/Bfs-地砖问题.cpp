#include <iostream>
#include <queue>
using namespace std;

const int maxn = 1001;
char a[maxn][maxn];
bool mark[25][25]; //标志地图上的每个点是否被访问过

struct node {
	int x, y;
}Node;

int X[4] = {0, 0, 1, -1};
int Y[4] = {1, -1, 0, 0};

int n, m;
bool judge(int x, int y) { //判断坐标x,y是否可以访问
	if (x < 0 || x >= n || y < 0 || y >= n || mark[x][y] == true || a[x][y] == '#') {
		return false;
	} else {
		return true;
	}
}

void BFS(int x, int y) {
	queue<node> Q; //此处必须为node类型
	Node.x = x, Node.y = y;
	Q.push(Node);
	mark[x][y] = true;
	while (!Q.empty()) {
		node top = Q.front();
		Q.pop();
		for (int i = 0; i < 4; i++) { //循环四次得到4个相邻的位置
			int newX = top.x + X[i];
			int newY = top.y + Y[i];
			if (judge(newX, newY)) { //如果新位置需要访问
				Node.x = newX, Node.y = newY;
				Q.push(Node); //将结点node加入队列
				mark[newX][newY] = true; //设置新位置已经入过队
			}
		}
	}
}


int main(int argc, char *argv[]) {
	while (scanf("%d %d", &n, &m) != EOF) {
		if (n == 0 && m == 0) break;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				scanf("%c", &a[i][j]);
			}
		}
		node head;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] == '@') {
					head.x = i;
					head.y = j;
					mark[i][j] = true;
				}
			}
		}
		int res = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (mark[i][j] == false && a[i][j] == '.') {
					BFS(i, j);
					res++;
				}
			}
		}
		printf("%d\n", res);
	}
}