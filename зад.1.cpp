#include <iostream>
using namespace std;

int main()
{
	double v1, v2, v3, p1, p2, p3, u, u1, u2, u3; v1=36, v2=40, v3=44; 
	cout << "\n Vvesti ploshchu pershogo polya: "; cin >> p1;
	cout << "\n Vvesti ploshchu drugogo polya: "; cin >> p2;
	cout << "\n Vvesti ploshchu tretyogo polya: "; cin >> p3;
	u1 = v1 * p1;
	u2 = v2 * p2;
	u3 = v3 * p3;
	cout << "\n Usego pshena na pershomu poli: " << u1 << endl;
	cout << "\n Usego pshena na drugomu poli: " << u2 << endl;
	cout << "\n Usego pshena na tretyomu poli: " << u3 << endl;
	u = u1 + u2 + u3;
	cout << "\n Usego pshena s tryoh poliv: " << u << endl;
}