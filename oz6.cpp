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
	return a * b * 0.87;      //функция рассчитывает сумму после вычета налогов 1-го работника
}

double r1nalog(double a, double b) {
	return a * b - (a * b * 0.87);   //функция вычисляет подоходный налог 1-го работника
}

double rab2(double a, double b) {
	return a * b * 0.87;      //функция рассчитывает сумму после вычета налогов 2-го работника
}

double r2nalog(double a, double b) {
	return a * b - (a * b * 0.87);      //функция вычисляет подоходный налог 2-го работника
}

double vmeste(double a, double b) {
	return a + b;        //функция рассчитывает общую сумму
}


void itog() {
	setlocale(0, "");
	double a1, b1;
	double a2, b2;
	
	string fam1, fam2;
	cout << "Фамилия 1-го работника: "; getline(cin, fam1);
	cout << "Фамилия 2-го работника: "; getline(cin, fam2);

	cout << "Количество часов 1-го работника: "; cin >> a1;
	cout << "Ставка 1-го работника: "; cin >> b1;

	cout << "Количество часов 2-го работника: "; cin >> a2;
	cout << "Ставка 2-го работника: "; cin >> b2;

	if (rab1(a1, b1) < 1000) {
		cout << "Меньше 1000р на руки получил " << fam1 << endl;
	}
	if (rab2(a2, b2) < 1000) {
		cout << "Меньше 1000р на руки получил " << fam2 << endl;
	}
	if (r1nalog(a1, b1) > 50) {
		char fl1 = fam1.front(), fl2 = fam1.back();
		cout << fl1 << "-" << fl2 << " имеет подоходный налог более чем 50р";
	}
	if (r2nalog(a2, b2) > 50) {
		char flr1 = fam2.front(), flr2 = fam2.back();
		cout << flr1 << "-" << flr2 << " имеет подоходный налог более чем 50р";
	}
}