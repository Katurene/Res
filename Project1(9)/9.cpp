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
	z1 = pow(cos(a) - cos(b), 2) - pow(sin(a) - sin(b), 2);
	z2 = -4 * pow(sin(a / 2 - b / 2), 2) * cos(a + b);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	_getch();
}