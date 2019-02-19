#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
	string a,b;
	while (cin >> a >> b) {
		int len1 = a.length();
		int len2 = b.length();
		int result = 0;
		for (int i = 0; i < len1; i++) {
			for (int j = 0; j < len2; j++) {
				result += (a[i]-'0') * (b[j]-'0');
			}
		}
		cout << result << endl;
	}
	    return 0;
}