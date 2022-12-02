#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, z1, z2;
	cout << "\n Vvedite a :"; cin >> a;
	z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) - cos(3 * a) + cos(5 * a));
	z2 = tan(3 * a);
	cout << "\n z1 = " << z1 << endl;
	cout << "\n z2 = " << z2 << endl;

	if (z1 = z2) cout << "\n Resultat spivpav";
	else cout << "\n Resultat ne spivpav, vvedeni neprepustumi snachennya a";
	system("pause>>void");
	return 0;
}