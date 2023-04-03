#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the radius and length of a cylinder : ";
	double radius, length;
	cin >> radius >> length;

	const double PI = 3.14159;
	double area = radius * radius * PI;
	double volume = area * length;

	cout << "The area is " << area << endl;
	cout << "The volume is " << volume << endl;

	return 0;

}