#include <iostream>
using namespace std;

int main()
{
	cout << "Enter investment amount : ";
	double investment;
	cin >> investment;

	cout << "Enter annual interest rate in percentage : ";
	double annualinterest;
	cin >> annualinterest;

	cout << "Enter number of years : ";
	double years;
	cin >> years;

	double futureInvestmentValue = investment * pow(1 + annualinterest / 1200, years * 12);

	cout << "Accumulated value is $" << futureInvestmentValue << endl;

	return 0;

}