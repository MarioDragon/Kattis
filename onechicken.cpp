#include <iostream>

using namespace std;

int main()
{
	int people = 0, chickens = 0;

	cin >> people >> chickens;

	if (people < chickens)
	{
		chickens = chickens - people;
		if (chickens == 1)
			cout << "Dr. Chaz will have " << chickens << " piece of chicken left over!\n";
		else
		cout << "Dr. Chaz will have " << chickens << " pieces of chicken left over!\n";
	}
	else if (people > chickens)
	{
		chickens = people - chickens;
		if (chickens == 1)
			cout << "Dr. Chaz needs " << chickens << " more piece of chicken!\n";
		else
			cout << "Dr. Chaz needs " << chickens << " more pieces of chicken!\n";
	}
	return 0;
}