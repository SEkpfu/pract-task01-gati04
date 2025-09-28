#include <iostream>

using namespace std;
double donaloga(double a, double b, double c);
double podnalog(double a, double b, double c);
double naruki(double a, double b, double c);

int main() {
	double a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << naruki(a, b, c);
	return 0;
}

double donaloga(double a, double b, double c) {
	return a * b + ((a * b * c) / 100);
}

double podnalog(double a, double b, double c) {
	return (donaloga(a, b, c) * 13) / 100;
}

double naruki(double a, double b, double c) {
	return donaloga(a, b, c) - podnalog(a, b, c);
}