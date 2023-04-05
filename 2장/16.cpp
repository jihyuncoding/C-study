#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the side : ";
	double side;
	cin >> side;

	double hexagon = (3 * pow(3, 0.5) * pow(side, 2)) / 2;

	cout << "The area of the hexagon is " << hexagon;

	return 0;

}