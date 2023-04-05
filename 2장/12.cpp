#include <iostream>
using namespace std;

int main()
{
	cout << "Enter speed and acceleration : ";
	double speed, acceleration;
	cin >> speed >> acceleration;

	double length = pow(speed, 2) / 2 / acceleration;

	cout << " The mininum runway length for this airplane is " << length;

	return 0;
}