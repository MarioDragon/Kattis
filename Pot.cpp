#include <iostream>
#include <cmath>
//This program brings an input number to the power of the last number
//For example: 214 becomes 21 to the power of 4
using namespace std;

int main()
{
	int input = 0;
	int numbers = 0, numStore = 0;
	int power = 0;
	int total = 0;
	int i;

	cin >> input;

	for (i = 0; i < input; i++)
	{
		cin >> numbers;
		total += pow(numbers/10, numbers%10);
	}

	cout << total;
		

	return 0;
}