#include <iostream>
#include <vector>

using namespace std;

int main() {
	setlocale(0, "");
	int n, count = 0;
	double mn = 10000000000000, mx = 0;
	double sumnalog = 0;
	cout << "Введите количество работников: "; cin >> n;

	vector<int> ch, st;
	vector<double> zp, nalog;
	vector<int> vishe50000;

	for (int i = 1; i < n + 1; i++) {
		int a;
		cout << "Количество часов " << i << "-го работника: "; cin >> a;
		ch.push_back(a);
	}

	for (int i = 1; i < n + 1; i++) {
		int b;
		cout << "Ставка " << i << "-го работника: "; cin >> b;
		st.push_back(b);
	}

	for (int i = 0; i < n; i++) {
		zp.push_back(ch[i] * st[i] * 0.87);
	}

	for (int i = 0; i < n; i++) {
		nalog.push_back(ch[i] * st[i] * 0.13);
	}

	for (int i = 0; i < n; i++) {
		mn = min(mn, zp[i]);
		mx = max(mx, zp[i]);
	}
	for (int i = 0; i < n; i++) {
		if (mn == zp[i]) {
			cout << "Номер работника, получившего меньше всех: " << i + 1 << endl;
		}
		if (mx == zp[i]) {
			cout << "Максимальная зарплата составляет " << zp[i] << " у работника номер " << i + 1 << endl;
		}
	}

	for (int i = 0; i < n; i++) {
		if (zp[i] > 50000) {
			count++;
			vishe50000.push_back(i + 1);
		}
	}
	cout << "Количество работников, получивших более 50000р: " << count << endl;
	cout << "Их номера: ";
	for (int i = 0; i < count; i++) {
		cout << vishe50000[i] << " ";
	}

	for (int i = 0; i < n; i++) {
		sumnalog += nalog[i];
	}
	cout << endl << "Сумма налога, уплаченного всей бригадой: " << sumnalog << endl;
	return 0;
}