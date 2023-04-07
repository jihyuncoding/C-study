#include <iostream>
#include <string>
using namespace std;

int main()
{
	int day, elapsedDays, futureDay;
	string dayName, futureDayName;
	cout << "Enter today's day: ";
	cin >> day;
	cout << "Enter the number of days elapsed since today: ";
	cin >> elapsedDays;

	futureDay = (day + elapsedDays) % 7;

	switch (day)
	{
	case 0:
		dayName = "Sunday";
		break;
	case 1:
		dayName = "Monday";
		break;
	case 2:
		dayName = "Tuesday";
		break;
	case 3:
		dayName = "Wednesday";
		break;
	case 4:
		dayName = "Thursday";
		break;
	case 5:
		dayName = "Friday";
		break;
	case 6:
		dayName = "Saturday";
		break;
	default:
		break;
	}

	switch (futureDay)
	{
	case 0:
		futureDayName = "Sunday";
		break;
	case 1:
		futureDayName = "Monday";
		break;
	case 2:
		futureDayName = "Tuesday";
		break;
	case 3:
		futureDayName = "Wednesday";
		break;
	case 4:
		futureDayName = "Thursday";
		break;
	case 5:
		futureDayName = "Friday";
		break;
	case 6:
		futureDayName = "Saturday";
		break;
	default:
		break;
	}

	cout << "Today is " << dayName << " and the future day is " << futureDayName << endl;
	return 0;
}