#include <iostream>
using namespace std;

int main()
{
	cout << "Enter weight in pounds : ";
	double weight;
	cin >> weight;

	cout << "Enter height in inches : ";
	double height;
	cin >> height;

	double BMI = weight * 0.45359237 / pow(height * 0.0254 , 2);

	cout << "BMI is " << BMI;

	return 0;
}