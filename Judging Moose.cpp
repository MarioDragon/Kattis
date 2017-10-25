#include <iostream>

using namespace std;

int main()
{
	int l, r;

	cin >> l >> r;

	if (l == 0 && r == 0)
		cout << "Not a moose";
	else if (l == r)
	{
		cout << "Even " << r * 2;

	}
	else if (l != r)
		{
			cout << "Odd ";
			if (l < r)
				cout << r * 2;
			else
				cout << l * 2;
		}

	return 0;

}