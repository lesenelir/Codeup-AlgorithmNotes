#include <iostream>
#include <cstdio>
using namespace std;


int main() {
	double N, K;
	while(scanf("%lf %lf", &N, &K) != EOF) {
		double sum = N, price = 200;
		int year = 1;    
		bool flag = true;
		while(sum < price) {
			sum = sum + N;
			price = price * (1 + K / 100);
			year++;
			if(year > 21) {
				flag = false;
				break;
			}
		}
		if(flag == true) {
			printf("%d\n",year);
		} else {
			printf("Impossible\n");
		}
		
	}
	return 0;
}