#include <iostream>

using namespace std;

int Function(int n) {
	if (n == 1 || n == 2) return 1;
	else return Function(n-1) + Function(n-2);
}

int main(int argc, char *argv[]) {
	int num;
	while (scanf("%d", &num) != EOF) {
		int result = Function(num);
		printf("%d", result);
	}	
}