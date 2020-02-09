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
	z1 = (1 - (2 * pow(sin(a), 2))) / (1 + sin(2 * a));
	z2 = (1 - tan(a)) / (1 + tan(a));
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	_getch();
}