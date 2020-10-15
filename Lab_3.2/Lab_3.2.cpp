// Lab_3.2.cpp
// Дорожовець Володимир
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 0.6
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double F;
	double F1;
	double a;
	double b;
	double c;
	double x;

	cout << "a = "; cin >> a;
	cout << endl;
	cout << "b = "; cin >> b;
	cout << endl;
	cout << "c = "; cin >> c;
	cout << endl;
	cout << "x = "; cin >> x;
	cout << endl;

	if (c < 0 && b != 0)
	{
		F = a * x * x + b * b * x;
		cout << "F = " << F << endl;
	}
	else
		if (c > 0 && b == 0)
		{
			F = (x + a) * 1.0 / (x + c) * 1.0;
			cout << "F = " << F << endl;
		}
		else
			if (!(c < 0 && b != 0) && !(c > 0 && b == 0))
			{
				F = x * 1.0 / c * 1.0;
				cout << "F = " << F << endl;
			}
			else

				// Скорочена форма
				if (c < 0 && b != 0)
				{
					F1 = a * x * x + b * b * x;
					cout << "F1 = " << F1 << endl;
				}
	if (c > 0 && b == 0)
	{
		F1 = (x + a) * 1.0 / (x + c) * 1.0;
		cout << "F1 = " << F1 << endl;
	}

	if (!(c < 0 && b != 0) && !(c > 0 && b == 0))
	{
		F1 = x * 1.0 / c * 1.0;
		cout << "F1 = " << F1 << endl;
	}

	cin.get();
	return 0;
}
