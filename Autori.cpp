#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

int main()
{
	char input[101];
	int count = 0, i = 0;

	cin >> input;

	count = strlen(input);

	for (i = 0; i < count; i++)
	{
		if (isupper(input[i]))
			cout << input[i];
	}
	return 0;
}