#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the monthly saving amount : ";
	double money;
	cin >> money;

	double total = money * (1 + 0.00417);
	total = (money + total) * (1 + 0.00417);
	total = (money + total) * (1 + 0.00417);
	total = (money + total) * (1 + 0.00417);
	total = (money + total) * (1 + 0.00417);
	total = (money + total) * (1 + 0.00417);
	
	cout << "After the sixth month, the account value is" << total << endl;
}