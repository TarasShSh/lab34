// lab34.cpp
// Шевченко Тарас
// Лабораторна робота No 3.4
// Розгалуження, задане графіком функції
// Варіант 23

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double R;
	double x;
	double y;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if (x < 0 && y > 0)
		if ((x >= sqrt(2 * y * R - pow(y, 2)) - R) && (x >= -R) && (y <= R))
			cout << "yes" << endl;
			else
			cout << "no" << endl;
	else if (x > 0 && y < 0)
		if ((x <= -sqrt(-2 * y * R - pow(y, 2)) + R) && (y >= -R) && (x <= R))
			cout << "yes" << endl;
			else
			cout << "no" << endl;
	else if (( x >= -R && x <= R) && (y > -R && y < R))
			cout << "yes" << endl;
			else
			cout << "no" << endl;
}