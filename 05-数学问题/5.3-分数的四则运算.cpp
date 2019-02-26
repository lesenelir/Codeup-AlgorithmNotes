#include <iostream>

using namespace std;

struct Fraction {
	int up, down;
};

//分数的化简
Fraction reduction(Fraction r) {
	if (r.down < 0) { //分母为负数，分子分母都变味相反数
		r.up = -r.up;
		r.down = -r.down;
	}
	if (r.up == 0) {
		r.down = 1;
	} else { 			 //分子不为0进行约分
		int d = gcd(abs(r.up), abs(r.down));
		r.up = r.up / d;    //约去最大公约数   
		r.down = r.down / d;
	}
	return r;
}

//分数加法
Fraction add(Fraction f1, Fraction f2) {
	Fraction result;
	result.up = f1.up * f2.down + f2.up * f1.down;
	result.down = f1.down * f2.down;
	return reduction(result);
}

//分数减法
Fraction minu(Fraction f1, Fraction f2) {
	Fraction result;
	result.up = f1.up * f2.down - f2.up * f1.down;
	result.down = f1.down * f2.down;
	return reduction(result);
}

//分数乘法
Fraction multi(Fraction f1, Fraction f2) {
	Fraction result;
	result.up = f1.up * f2.up;
	result.down = f1.down * f2.down;
	return reduction(result);
}

//分数除法
Fraction divide(Fraction f1, Fraction f2) {
	Fraction result;
	result.up = f1.up * f2.down;
	result.down = f1.down * f2.up;
	return reduction(result);
}

int main(int argc, char *argv[]) {

}