#include <iostream>
#include <string>
//this program needs to replace all bob inputs with bob
//for example, boooobasdf is bobasdf
using namespace std;

int main()
{
	string bob = "";
	char temp;
	int i, len = 0, letters;
	int strlen = 0;

	getline(cin, bob);

	strlen = bob.length();

	for (i = 0; i < strlen; i++)
	{
		letters = 0;
		if (!(i >= strlen - 1))
		{
			while (bob[i + letters + 1] == bob[i])
				letters++;
			if (letters >= 1)
			{
				temp = bob[i];
				bob.erase(i, letters);
				strlen -= letters;
			}
		}
	}

	cout << bob;

	return 0;
}