#include <iostream>
using namespace std;
int main()
{
	int notebooks_price, pens_price;
	int notebooks_quantity, pens_quantity;
	int total_bill;
	cout << "Enter price of notebooks:";
	cin >> notebooks_price;
	cout << "Enter price of pens:";
	cin >> pens_price;
	cout << "Enter quantity of notebooks:";
	cin >> notebooks_quantity;
	cout << "Enter quantity of pens:";
	cin >> pens_quantity;
	total_bill = (notebooks_price*notebooks_quantity)+(pens_price*pens_quantity);
	cout << " Total Shopping Bill = Rs." << total_bill;
	return 0;
}
