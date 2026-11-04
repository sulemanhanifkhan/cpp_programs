#include <iostream>
using namespace std;
int main()
{
	int total_seconds;
	int hours, minutes, seconds;
	cout << "Enter total seconds:";
	cin >> total_seconds;
	hours=total_seconds/3600;
	minutes=(total_seconds%3600) /60;
	seconds=total_seconds%60;
	cout << hours << "hours, " << minutes << "minutes, " << seconds << "seconds";
	return 0;
}
