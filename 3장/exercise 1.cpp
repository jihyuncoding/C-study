#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a, b, c : ";
	double a, b, c;
	cin >> a >> b >> c;

	double r1 = (-b + pow(pow(b, 2) - 4 * a*c, 0.5)) / 2 / a;
	double r2 = (-b - pow(pow(b, 2) - 4 * a*c, 0.5)) / 2 / a;

	if (pow(pow(b, 2) - 4 * a*c, 0.5) > 0)
	{
		cout << "The roots are " << r1 << " and " << r2 << endl;
	}
	else if (pow(pow(b, 2) - 4 * a*c, 0.5) == 0)
	{
		cout << "The root is " << r1 << endl;
	}
	else 
	{
		cout << "The equation has no ral roots" << endl;
	}

	return 0;
}