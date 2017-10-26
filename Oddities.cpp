#include <iostream>

using namespace std;

int main()
{
	int count, number[20];
	int test[20];
	int i;

	cin >> count;

	for (i = 0; i < count; i++)
	{
		cin >> number[i];
		test[i] = number[i] % 2;
	}

	for (i = 0; i < count; i++)
	{
		if (test[i] == 0)
			cout << number[i] << " is even\n";
		else
			cout << number[i] << " is odd\n";
	}

	return 0;
}