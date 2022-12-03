#include <iostream>
#include <math.h>
using namespace std;
double fun(int a, int b)
{return cbrt(abs(a - b));
}
int main()
{
    double y, a, b, x, t; x = 1.7;
    cout << "\n Vvdite t: "; cin >> t;
    b = sqrt(pow(x, 2) + pow(t, 2));
    a = log10(x);
    y = fun(a, b);
    cout << "\n y= " << y << endl;
}