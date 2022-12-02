#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, ".1251");
    double v, m, AB, BC, AC, p;
    int xa = 0, xb = 4, xc = -4;
    int ya = 0, yb = 3, yc = 5;
    AB = sqrt(((xb * xb) - (2 * xb * xa) + (xa * xa)) + ((yb * yb) - (2 * yb * ya) + (ya * ya)));
    BC = sqrt(((xc * xc) - (2 * xc * xb) + (xb * xb)) + ((yc * yc) - (2 * yc * yb) + (yb * yb)));
    AC = sqrt(((xc * xc) - (2 * xc * xa) + (xa * xa)) + ((yc * yc) - (2 * yc * ya) + (ya * ya)));
    cout << "AB = " << AB << " cм" << endl;
    cout << "BC = " << BC << " cм" << endl;
    cout << "AC = " << AC << " cм" << endl;
    p = (AB + BC + AC)/2;
    v = (2 / AB) * sqrt(p * (p - AB) * (p - BC) * (p - AC));
    cout << "Висота трикутника = " << v << " cм" << endl;
    m = sqrt((2 * pow(AB, 2)) + (pow(BC, 2)) - (2*pow(AC, 2))) / 2;
    cout << "Медiана трикутника = " << m << " cм" << endl;
}