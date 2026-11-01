#include <iostream>
using namespace std;
int main()
{
	int units;
	float price_per_unit, total_charges;
	cout << "Enter number of units consumed:";
	cin >> units;
	cout << "Enter price per unit:";
	cin >> price_per_unit;
	total_charges = units*price_per_unit;
	cout << "Total Electricity Bill =Rs." << total_charges;
	return 0;
}
