#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two integers : ";
	int integer1, integer2;
	cin >> integer1 >> integer2;

	if (integer1 % integer2 == 0)
	{
		cout << integer1 << " is divisible by " << integer2 << endl;
	}
	else
	{
		cout << integer1 << " is not divisible by " << integer2 << endl;
	}

	return 0;

}