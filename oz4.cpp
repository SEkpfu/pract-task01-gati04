//#include <iostream>
//
//using namespace std;
//double donaloga(double a, double b, double c);
//double podnalog(double a, double b, double c);
//double naruki(double a, double b, double c);
//void git(double a, double b, double c, double& e, double& f, double& g);
//
//int main() {
//	setlocale(0, "");
//	double a, b, c;
//	double donalog = 0, nalog = 0, poslenal = 0;
//	cout << "Количество часов: "; cin >> a;
//	cout << "Ставка: "; cin >> b;
//	cout << "Процент премии: "; cin >> c;
//	git(a, b, c, donalog, nalog, poslenal);
//	cout << "Общая заработанная сумма: " << donalog << endl;
//	cout << "Подоходный налог: " << nalog << endl;
//	cout << "Сумма после вычета налогов: " << poslenal << endl;
//	return 0;
//}
//
//
//double donaloga(double a, double b, double c) {
//	return a * b + ((a * b * c) / 100);
//}
//
//double podnalog(double a, double b, double c) {
//	return (donaloga(a, b, c) * 13) / 100;
//}
//
//double naruki(double a, double b, double c) {
//	return donaloga(a, b, c) - podnalog(a, b, c);
//}
//
//void git(double a, double b, double c, double& e, double& f, double& g) {
//	e = donaloga(a, b, c);
//	f = podnalog(a, b, c);
//	g = naruki(a, b, c);
//}