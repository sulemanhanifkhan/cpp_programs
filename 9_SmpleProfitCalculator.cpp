#include <iostream>
using namespace std;
int main()
{
	float purchase_price, selling_price;
	int quantity;
	float total_purchase, total_sales, profit_loss;
	cout << "Enter purchase price:";
	cin >> purchase_price;
	cout << "Enter selling price:";
	cin >> selling_price;
	cout << "Enter quantity sold:";
	cin >> quantity;
	total_purchase=purchase_price*quantity;
	total_sales=selling_price*quantity;
	profit_loss=total_sales-total_purchase;
	cout << "Total Purchase Cost = Rs. " << total_purchase << endl;
	cout << "Total Sales Revenue = Rs. " <<total_sales << endl;
	cout << "Profit/loss = Rs. " << profit_loss;
	return 0;
}
