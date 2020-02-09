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
	z1 = pow(cos(3. / 8 * M_PI - alpha / 4), 2) - pow(cos(11. / 8 * M_PI + alpha / 4), 2);
	z2 = sqrt(2) / 2 * sin(alpha / 2);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	_getch();
}