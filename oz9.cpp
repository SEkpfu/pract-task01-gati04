#include <iostream>
#include <vector>

using namespace std;
void minzp(const vector<double>& arr, int b);
void maxzp(const vector<double>& arr, int b);
void kolvo(const vector<double>& arr, int b);
void sumnalog(const vector<double>& arr, int b);

int main() {
	setlocale(0, "");
	int n;
	cout << "������� ���������� ����������: "; cin >> n;

	vector<int> ch, st;
	vector<double> zp, nalog;

	for (int i = 1; i < n + 1; i++) {
		double a;
		cout << "���������� ����� " << i << "-�� ���������: "; cin >> a;
		ch.push_back(a);
	}

	for (int i = 1; i < n + 1; i++) {
		double b;
		cout << "������ " << i << "-�� ���������: "; cin >> b;
		st.push_back(b);
	}

	for (int i = 0; i < n; i++) {
		zp.push_back(ch[i] * st[i] * 0.87);
	}

	for (int i = 0; i < n; i++) {
		nalog.push_back(ch[i] * st[i] * 0.13);
	}

	minzp(zp, n);
	maxzp(zp, n);
	kolvo(zp, n);
	sumnalog(nalog, n);

	return 0;
}


void minzp(const vector<double>& arr, int b) {
	int mn = 100000000000;
	for (int i = 0; i < b; i++) {
		if (arr[i] < mn) {
			mn = arr[i];
		}
	}
	for (int i = 0; i < b; i++) {
		if (mn == arr[i]) {
			cout << "����� ���������, ����������� ������ ����: " << i + 1 << endl;
		}
	}
}

void maxzp(const vector<double>& arr, int b) {
	int mx = 0;
	for (int i = 0; i < b; i++) {
		if (mx < arr[i]) {
			mx = arr[i];
		}
	}
	for (int i = 0; i < b; i++) {
		if (mx == arr[i]) {
			cout << "������������ �������� ���������� " << arr[i] << " � ��������� ����� " << i + 1 << endl;
		}
	}
}

void kolvo(const vector<double>& arr, int b) {
	int count = 0;
	vector<int> vishe50000;
	for (int i = 0; i < b; i++) {
		if (arr[i] > 50000) {
			count++;
			vishe50000.push_back(i + 1);
		}
	}
	cout << "���������� ����������, ���������� ����� 50000�: " << count << endl;
	cout << "�� ������: ";
	for (int i = 0; i < count; i++) {
		cout << vishe50000[i] << " ";
	}
}

void sumnalog(const vector<double>& arr, int b) {
	double summa = 0;
	for (int i = 0; i < b; i++) {
		summa += arr[i];
	}
	cout << endl << "����� ������, ����������� ���� ��������: " << summa << endl;
}