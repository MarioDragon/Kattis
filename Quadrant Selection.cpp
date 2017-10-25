#include <iostream>

using namespace std;

int main()
{
	int x, y;
	bool isPositivex = 0, isNegativex = 0, isNegativey = 0, isPositivey = 0;

	cin >> x >> y;

	if (x < 0)
		isNegativex = x;
	else
		isPositivex = x;

	if (y < 0)
		isNegativey = y;
	else
		isPositivey = y;

	if (isPositivex == 1 && isPositivey == 1)
		cout << "1";
	else if (isPositivex == 0 && isPositivey == 1)
		cout << "2";
	else if (isPositivex == 0 && isPositivey == 0)
		cout << "3";
	else if (isPositivex == 1 && isPositivey == 0)
		cout << "4";
		


	return 0;
}