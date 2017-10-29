#include <iostream>

using namespace std;

int main()
{
	int megabytes;
	int months;
	int dataUsed;
	int i;
	int dataLeft = 0;

	cin >> megabytes;
	cin >> months;

	for (i = 0; i < months; i++)
	{
		cin >> dataUsed;
		dataLeft += megabytes - dataUsed;
	}

	dataLeft += megabytes;

	cout << dataLeft;

	return 0;
}