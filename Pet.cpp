#include <iostream>

using namespace std;

int main()
{
	int contestants[5][4];
	int winners[5];
	int win, num = 0;
	int i, j;

	for (i = 0; i < 5; i++)
		winners[i] = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			cin >> contestants[i][j];
	}

	for (i = 0; i < 4; i++)
	{
		winners[0] += contestants[0][i];
		winners[1] += contestants[1][i];
		winners[2] += contestants[2][i];
		winners[3] += contestants[3][i];
		winners[4] += contestants[4][i];
	}

	win = 0;
	for (i = 0; i < 5; i++)
	{
		if (winners[i] > win)
		{
			win = winners[i];
			num = i;
		}
	}

	cout << num + 1 << " " << win;

	return 0;
}