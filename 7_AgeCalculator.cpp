#include <iostream>
using namespace std;
int main()
{
	int age_years;
	int age_months, age_weeks, age_days;
	cout << "Enter age in years:";
	cin >> age_years;
	age_months=age_years*12;
	age_weeks=age_years*52;
	age_days=age_years*365;
	cout << "Age in Months = " << age_months << endl;
	cout << "Age in Weeks = " << age_weeks << endl;
	cout << "Age in Days = " << age_days;
	return 0;
}
