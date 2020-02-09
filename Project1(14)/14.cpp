#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double m, n, z1, z2;
	cout << "¬ведите m" << endl;
	cout << "¬ведите n" << endl;
	cin >> m;
	cin >> n;
	z1 = ((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) / (sqrt((pow(m, 3) * n)) + m * n + pow(m, 2) - m);
	z2 = (sqrt(m) - sqrt(n)) / m;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	_getch();
}