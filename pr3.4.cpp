// Lab_03_4.cpp
// < Мельник Дар'я >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 10

#include <iostream>

using namespace std;

int main()
{
	double a; // вхідний аргумент
	double b; // вхідний параметр
	double R;// вхідний параметр
	double x;// вхідний параметр
	double y;// вхідний параметр

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if ((y = sqrt(R * R - x * x) && x >= a) || (y = -(sqrt(R * R - x * x)) && y <= -b))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}