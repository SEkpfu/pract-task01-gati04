//#include <iostream>
//
//using namespace std;
//double rab1(double a, double b);
//double rab2(double a, double b);
//double vmeste(double a, double b);
//void itog();
//
//int main() {
//	setlocale(0, "");
//	itog();
//	return 0;
//}
//
//double rab1(double a, double b) {
//	return a * b * 0.87;
//}
//
//double rab2(double a, double b) {
//	return a * b * 0.87;
//}
//
//double vmeste(double a, double b) {
//	return a + b;
//}
//
//void itog() {
//	double a1, b1;
//	double a2, b2;
//
//	cin >> a1 >> b1;
//	cin >> a2 >> b2;
//
//	if (rab1(a1, b1) > rab2(a2, b2)) {
//		cout << "Первый работник заработал больше" << endl;
//	}
//	else {
//		cout << "Второй работник заработал больше" << endl;
//	}
//	cout << "Вместе заработано: " << vmeste(rab1(a1, b1), rab2(a2, b2));
//}