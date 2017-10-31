#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double area;

	cin >> area;

	area = sqrt(area) * 4;

	cout << fixed << setprecision(6);
	cout << area;

	return 0;
}