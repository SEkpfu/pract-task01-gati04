#include <iostream>
#include <string>

using namespace std;
double rab1(double a, double b);
double r1nalog(double a, double b);
double rab2(double a, double b);
double r2nalog(double a, double b);
double vmeste(double a, double b);
void itog();

int main() {
	setlocale(0, "");
	itog();
	return 0;
}

double rab1(double a, double b) {
	return a * b * 0.87;      //������� ������������ ����� ����� ������ ������� 1-�� ���������
}

double r1nalog(double a, double b) {
	return a * b - (a * b * 0.87);   //������� ��������� ���������� ����� 1-�� ���������
}

double rab2(double a, double b) {
	return a * b * 0.87;      //������� ������������ ����� ����� ������ ������� 2-�� ���������
}

double r2nalog(double a, double b) {
	return a * b - (a * b * 0.87);      //������� ��������� ���������� ����� 2-�� ���������
}

double vmeste(double a, double b) {
	return a + b;        //������� ������������ ����� �����
}


void itog() {
	setlocale(0, "");
	double a1, b1;
	double a2, b2;
	
	string fam1, fam2;
	cout << "������� 1-�� ���������: "; getline(cin, fam1);
	cout << "������� 2-�� ���������: "; getline(cin, fam2);

	cout << "���������� ����� 1-�� ���������: "; cin >> a1;
	cout << "������ 1-�� ���������: "; cin >> b1;

	cout << "���������� ����� 2-�� ���������: "; cin >> a2;
	cout << "������ 2-�� ���������: "; cin >> b2;

	if (rab1(a1, b1) < 1000) {
		cout << "������ 1000� �� ���� ������� " << fam1 << endl;
	}
	if (rab2(a2, b2) < 1000) {
		cout << "������ 1000� �� ���� ������� " << fam2 << endl;
	}
	if (r1nalog(a1, b1) > 50) {
		char fl1 = fam1.front(), fl2 = fam1.back();
		cout << fl1 << "-" << fl2 << " ����� ���������� ����� ����� ��� 50�";
	}
	if (r2nalog(a2, b2) > 50) {
		char flr1 = fam2.front(), flr2 = fam2.back();
		cout << flr1 << "-" << flr2 << " ����� ���������� ����� ����� ��� 50�";
	}
}