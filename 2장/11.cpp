#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double initialPopulation = 312032486;
	double birthPerSecond = 1.0 / 7;
	double deathPerSecond = 1.0 / 13;
	double immigrantPerSecond = 1.0 / 45;
	double populationChange = birthPerSecond + immigrantPerSecond - deathPerSecond;
	double secondsPerDay = 24.0 * 60 * 60;
	double days = 365;
	int numberOfYears;
	
	cout << "Enter the number of years: ";
	cin >> numberOfYears;
	cout << setprecision(0) << showpoint << fixed;
	cout << "The population in " << numberOfYears << " years is "
		<< initialPopulation + 365 * populationChange * secondsPerDay * numberOfYears << endl;
	
	return 0;
}