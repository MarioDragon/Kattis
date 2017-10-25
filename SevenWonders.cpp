#include <iostream>
#include <cstring>
#include <cmath>
//this program calculates points for the game Seven Wonders
using namespace std;

int main()
{
	char cards[50];
	int i, t = 0, c = 0, g = 0;
	int cardsL, total = 0, smallest = 0;

	cin >> cards;
	cardsL = strlen(cards);

	for (i = 0; i < cardsL; i++)
	{
		if (cards[i] == 'T')
			t++;
		else if (cards[i] == 'C')
			c++;
		else if (cards[i] == 'G')
			g++;
	}
	
	smallest = t;

		if (g < smallest)
			smallest = g;

		if (c < smallest)
			smallest = c;

	t = pow(t, 2);
	c = pow(c, 2);
	g = pow(g, 2);

	total = (smallest * 7) + t + g + c;

	cout << total << endl;


	return 0;
}