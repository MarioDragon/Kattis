#include <iostream>

using namespace std;

int main()
{
	int matches, width, height, length;
	int matchLength[1000];
	int i;

	cin >> matches >> width >> height;

	width = pow(width, 2);
	height = pow(height, 2);
	length = sqrt(width + height);

	for (i = 0; i < matches; i++)
	{
		cin >> matchLength[i];
	}

	for (i = 0; i < matches; i++)
	{
		if (matchLength[i] <= length)
			cout << "DA\n";
		else
			cout << "NE\n";
	}


	return 0;
}