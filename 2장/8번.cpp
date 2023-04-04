#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int totalSeconds = time(0);
	
	cout << "Enter the time zone offset to GMT : ";
	int time;
	cin >> time;

	int currentSecond = totalSeconds % 60;

	int totalMinutes = totalSeconds / 60;

	int currentMinute = totalMinutes % 60;

	int totalHours = totalMinutes % 60;

	totalHours += time;

	int currentHour = totalHours % 24;

	cout << "The current time is " << currentHour << " : " << currentMinute << " : " << currentSecond << endl;

	return 0;

}