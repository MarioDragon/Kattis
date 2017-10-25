#include <iostream>
#include <cstring>
//this program checks how many spells were cast
//any spell with CD is a losing attack
using namespace std;

int main() 
{
	int battles;
	char casts[1001];
	int i, j;
	int wins = 0, losses = 0;
	int castsCount;

	cin >> battles;

	for (i = 0; i < battles + 1; i++)
	{
		cin.getline(casts, 1001);
		castsCount = strlen(casts);
		for (j = 0; j < castsCount; j++)
		{
			if (casts[j] == 'C' && casts[j + 1] == 'D')
			{
				losses++;
				if (losses)
					break;
			}
		}
	}

	wins = battles - losses;

	cout << wins;

	return 0;
}