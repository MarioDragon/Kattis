#include <iostream>

using namespace std;

int main()
{
	int i;
	int numberTemps, temps;
	int negTemps;
	//program determines how many temperatures are negative

	cin >> numberTemps;

	negTemps = 0;

	for (i = 0; i < numberTemps; i++)
	{
		cin >> temps;
		if (temps < 0)
			negTemps++;
	}

	cout << negTemps;


	return 0;
}