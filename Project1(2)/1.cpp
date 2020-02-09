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
	z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
	z2 = 2 * sqrt(2) * cos(alpha) * sin(M_PI / 4 + 2 * alpha);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	_getch();
}