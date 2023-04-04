#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number between 0 and 1000 : ";
	int number;
	cin >> number;

	int sum = number / 100 + number % 100 / 10 + number % 10;

	cout << "The sum of the digits is " << sum << endl;

	return 0;
}