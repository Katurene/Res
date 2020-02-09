#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double a, z1, z2;
	cout << "¬ведите a" << endl;
	cin >> a;
	z1 = sin(M_PI / 2 + 3 * a) / (1 - sin(3 * a - M_PI));
	z2 = 1/tan(5./4 * M_PI + 3./2 * a);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	_getch();
}