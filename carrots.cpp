#include <iostream>
#include <string>

using namespace std;

int main()
{
	int contestants, huffles;
	int i;
	string description;

	cin >> contestants >> huffles;

	for (i = 0; i < contestants + 1; i++)
		getline(cin, description);

	cout << huffles;

	return 0;
}