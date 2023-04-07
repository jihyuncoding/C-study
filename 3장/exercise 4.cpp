#include <iostream>
using namespace std;

int main()
{
	cout << "Enter temperate : ";
	double temperate;
	cin >> temperate;

	if (temperate < 30)
	{
		cout << "cold" << endl;
	}
	else if (temperate > 100)
	{
		cout << "too hot" << endl;
	}
	else
	{
		cout << "just right" << endl;
	}

	return 0;
}