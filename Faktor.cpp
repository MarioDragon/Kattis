#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int articles, citations;
	int answer;

	cin >> articles;
	cin >> citations;

	answer = (articles * citations) - articles + 1;

	cout << answer;

	return 0;
}