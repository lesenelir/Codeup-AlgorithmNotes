#include <iostream>

using namespace std;

int eat(int n) {
	if (n == 1) return 1;
	else if (n == 2) return 2;
	else return eat(n-1)+eat(n-2);
}

int main(int argc, char *argv[]) {
	int n;
	while (scanf("%d", &n) != EOF) {
		int result;
		result = eat(n);
		printf("%d", result);
	}
}