#include <iostream>
//this program determines how many chess pieces are missing
//first array corresponds with how many correct pieces there are
//user inputs their chess pieces and program tells them which they
//need to add or subtract
using namespace std;

int main()
{
	int correctBoard[6] = { 1, 1, 2, 2, 2, 8 };
	int chess[6];
	int i;

	for (i = 0; i < 6; i++)
		cin >> chess[i];
	
	for (i = 0; i < 6; i++)
	{
		if (chess[i] == correctBoard[i])
			cout << "0 ";
		else if (chess[i] < correctBoard[i])
			cout << correctBoard[i] - chess[i] << " ";
		else if (chess[i] > correctBoard[i])
			cout << "-" << chess[i] - correctBoard[i] << " ";

	}

	return 0;
}