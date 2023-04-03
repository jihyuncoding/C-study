#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a degree in Celsius : ";
	double celsius;
	cin >> celsius;

	double farenheit = (9.0 / 5) * celsius + 32;

	cout << celsius << " Celsius is " << farenheit << " Fahrenheit" << endl;

	return 0;
}