#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the driving distance : ";
	double distance;
	cin >> distance;

	cout << "Enter miles per gallon : ";
	double miles;
	cin >> miles;

	cout << "Enter price per galloon : ";
	double gallon;
	cin >> gallon;

	double cost = distance / miles * gallon;
	cout << "The cost of driving is " << cost << endl;

	return 0;
}