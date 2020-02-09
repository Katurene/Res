#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double a, b, z1, z2;
	cout << "¬ведите a" << endl;
	cout << "¬ведите b" << endl;
	cin >> a;
	cin >> b;
	z1 = (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a));
	z2 = (1 + sin(2 * b)) / cos(2 * b);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	_getch();
}