#include <iostream>
using namespace std;
int main()
{
	float total_bill;
	int number_friends;
	float per_person;
	cout << "Enter total restaurant bill:";
	cin >> total_bill;
	cout << "Enter number of friends:";
	cin >> number_friends;
	per_person=total_bill/number_friends;
	cout << "Each friend must pay = Rs." << per_person;
	return 0;
}
