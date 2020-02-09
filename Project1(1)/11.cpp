#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double alpha, z1, z2;
	cout << "¬ведите alpha" << endl;
	cin >> alpha;
	z1 = 2 * (pow(sin(3 * M_PI - 2 * alpha), 2)) * pow(cos(5 * M_PI + 2 * alpha), 2);
	z2 = 1. / 4 - 1. / 4 * sin(5. / 2 * M_PI - 8 * alpha);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	_getch();
}