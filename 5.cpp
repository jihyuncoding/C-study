#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the subtotal and a gratuity rate : ";
	double subtotal, gratuityrate;
	cin >> subtotal >> gratuityrate;

	double gratuity = subtotal * gratuityrate / 100;

	double total = subtotal + gratuity;

	cout << "The gratuity is $" << gratuity << " and total is $" << total << endl;

	return 0;
}