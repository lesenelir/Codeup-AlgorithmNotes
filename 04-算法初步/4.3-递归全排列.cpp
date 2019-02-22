#include <iostream>

using namespace std;
const int maxn = 11;
int n,P[maxn];
bool hashTable[maxn] = {false};

void generateP(int index) {
	if (index == n + 1) {
		for (int i = 1; i <= n; i++) {
			printf("%d", P[i]);
		}
		printf("\n");
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (hashTable[i] == false) {
			P[index] = i;
			hashTable[i] = true;
			generateP(index + 1);
			hashTable[i] = false;
		}
	}
}

int main(int argc, char *argv[]) {
	int n = 3;
	generateP(1);
}