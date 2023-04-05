#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the amount of water in kilograms : ";
	double kilograms;
	cin >> kilograms;

	cout << "Enter the initial temperature : ";
	double initialTemperature;
	cin >> initialTemperature;

	cout << "Enter the final temperature : ";
	double finalTemperature;
	cin >> finalTemperature;

	double energy = kilograms * (finalTemperature - initialTemperature) * 4184;

	cout << "The energy needed is " << energy << endl;
}