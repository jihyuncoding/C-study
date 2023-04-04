#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the number of minutes : ";
	int minutes;
	cin >> minutes;

	int years = minutes / 365 / 24 / 60;
	int minute = minutes / 24 / 60 % 365;

	cout << minutes << " minutes is approximately " << years << " years and " << minute << " days" << endl;

	return 0;
}