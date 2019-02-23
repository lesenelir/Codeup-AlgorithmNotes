#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		cout << rand() << " ";
	}	
	cout << endl;
}