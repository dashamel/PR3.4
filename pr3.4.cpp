// Lab_03_4.cpp
// < ������� ���'� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 10

#include <iostream>

using namespace std;

int main()
{
	double a; // ������� ��������
	double b; // ������� ��������
	double R;// ������� ��������
	double x;// ������� ��������
	double y;// ������� ��������

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// ������������ � ����� ����
	if ((y = sqrt(R * R - x * x) && x >= a) || (y = -(sqrt(R * R - x * x)) && y <= -b))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}