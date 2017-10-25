#include <iostream>
//this program breaks a spell by saying Abracadabra however many times the user input
using namespace std;

int main()
{
	int days , i;

	cin >> days;

	for (i = 0; i < days; i++)
		cout << i + 1 << " Abracadabra" << endl;

	return 0;
}