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
	z1 = cos(alpha) + cos(2 * alpha) + cos(6 * alpha) + cos(7 * alpha);
	z2 = 4 * cos(alpha / 2) * cos(5. / 2 * alpha) * cos(4 * alpha);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	_getch();
}