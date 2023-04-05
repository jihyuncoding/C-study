#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the temperature in Fahrenheit : ";
	double temperature;
	cin >> temperature;

	cout << "Enter the wind speed in miles per hour : ";
	double speed;
	cin >> speed;

	double chill = 35.74 + 0.6215 * temperature - 35.75 * pow(speed, 0.16) + 0.4275 * temperature * pow(speed, 0.16);

	cout << "The wind chill index is " << chill << endl;

	return 0;
}