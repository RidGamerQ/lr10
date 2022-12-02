#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, ".1251");
	double x, y, h, res;
	cout << "\n Введіть x :"; cin >> x;
	cout << "\n Введіть y :"; cin >> y;
	cout << "\n Введіть h :"; cin >> h;
	res = sqrt((1 - 2 * pow(cos(x), 2)) / sin(h) - cos(y));
	if ((1 - 2 * pow(cos(x), 2)) / sin(h) - cos(y) > 0 && sin(h) - cos(y) != 0)
	{
		cout << "\n Результат" << res << endl;
	}
	else {
		cout << "\n Неправильні числа";
	}
}