#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
//no clue why this works but it does
//compares normal geometry to taxicab geometry
using namespace std;

int main()
{
	double pi = M_PI; //_USE_MATH_DEFINES not really necessary for this purpose
	double radius;
	double normal, taxicab;

	cin >> radius;

	normal = pi * pow(radius, 2);

	taxicab = 4 * pow(radius, 2);
	taxicab = taxicab / 2;

	cout << fixed << setprecision(6);
	cout << normal << endl;
	cout << taxicab << endl;

	return 0;
}
