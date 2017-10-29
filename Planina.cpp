#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int iterations;
	int answer;

	cin >> iterations;

	answer = pow(pow(2, iterations) + 1, 2);

	cout << answer;

	return 0;
}