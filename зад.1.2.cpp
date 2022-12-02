#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, ".1251");
	double t1, t2, var, varG;
	cout << "\n Введіть t1 :"; cin >> t1;
	cout << "\n Введіть t2 :"; cin >> t2;
	cout << "\n Введіть var :"; cin >> var;
	if (t1 > t2) varG = t1 * var - t2 * var;
	else varG = t2 * var - t1 * var;
	cout << "\n Результат " << varG << "грн набiгло" << endl;
}