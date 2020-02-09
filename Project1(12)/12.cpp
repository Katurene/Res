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
	z1 = (sin(4 * a) / (1 + cos(4 * a))) * (cos(2 * a) / (1 + cos(2 * a)));
	z2 = 1 / tan(3. / 2 * M_PI - a);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	_getch();
}