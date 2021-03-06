#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Поиск решения для системы линейных уравнений вида:" << endl;
	cout << "A1*x + B1 *y = C1" << endl;
	cout << "A2*x + B2 *y = C2" << endl;
	cout << "" << endl;
	cout << "Введите коэффициенты A1, B1, C1, A2, B2, C2 (значения должны быть разделены пробелами или символом перевода строки, разделитель дробной части - точка)" << endl;

	double a1, b1, c1, a2, b2, c2;
	if (cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2) {

		cout << "" << endl;

		double _tmp = a1 * b2 - a2 * b1;
		if (_tmp != 0) {
			double x = (c1*b2 - c2 * b1) / _tmp;
			double y = (a1*b2 - a2 * b1) / _tmp;

			cout << "Система следующее решения X: " << x << ", Y: " << y << endl;

		}
		else {
			cout << "Система не имеет решения т.к. (A1*B2 - A2*B1) равно нулю." << endl;

		}
	}
	else {
		cout << "Ошибка ввода данных." << endl;
	}

	system("pause");

	return 0;
}
