#include <iostream>

using namespace std;
void dn();
double donaloga(double a, double b, double c);
double podnalog(double a, double b, double c);
double naruki(double a, double b, double c);

int main() {
	setlocale(0, "");
	dn();
	return 0;
}

void dn() {
	double a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "���������� �����: " << a << endl;
	cout << "������: " << b << endl;
	cout << "������� ������: " << c << endl;
	cout << "����� ������������ �����: " << donaloga(a, b, c) << endl;
	cout << "���������� �����: " << podnalog(a, b, c) << endl;
	cout << "����� ����� ������ �������: " << naruki(a, b, c) << endl;
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