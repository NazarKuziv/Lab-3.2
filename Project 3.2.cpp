// Lab_03_2.cpp
// <����� ������ >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������6

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;


	// ����� 1: ������������ � ���������� ����
	if (c < 0 && b != 0)
		F = a * pow(x, 2) + pow(b, 2) * x;
	if (c > 0 && b == 0)
		F = (x + a) / (x + c);
	if (!(c < 0 && b != 0) && !(c > 0 && b == 0))
		F = x / c;
	cout << endl;
	cout << "1) F = " << F << endl;

	// ����� 2: ������������ � ������ ����
	if (c < 0 && b != 0)
		F = a * pow(x, 2) + pow(b, 2) * x;
	else
		if (c > 0 && b == 0)
			F = (x + a) / (x + c);
		else
			F = x / c;

	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}