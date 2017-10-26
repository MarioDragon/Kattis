#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int cases;
	int revenue, expecRevenue, costAds;
	int advertise;
	int i;

	cin >> cases;

	for (i = 0; i < cases; i++)
	{
		cin >> revenue >> expecRevenue >> costAds;
		advertise = expecRevenue - costAds;
		if (advertise > revenue)
			cout << "advertise";
		else if (advertise < revenue)
			cout << "do not advertise";
		else if (advertise == revenue)
			cout << "does not matter";

	}

	return 0;
}