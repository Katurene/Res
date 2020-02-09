#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double x, y, z1, z2;
	cout << "¬ведите x" << endl;
	cout << "¬ведите y" << endl;
	cin >> x;
	cin >> y;
	z1 = pow(cos(x), 4) + pow(sin(y), 2) + 1. / 4 * pow(sin(2 * x), 2) - 1;
	z2 = sin(y + x) * sin(y - x);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	_getch();
}