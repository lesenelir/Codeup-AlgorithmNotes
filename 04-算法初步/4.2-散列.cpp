#include <iostream>

using namespace std;

bool hashTable[1000] = {false};

int main(int argc, char *argv[]) {
	int n, m, x;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		hashTable[x] = true;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &x);
		if (hashTable[x] == true) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}