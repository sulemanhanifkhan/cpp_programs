#include <iostream>
using namespace std;
int main()
{
	float distance, average, price_per_litre;
	float petrol_consumed, total_cost;
	cout << "Enter distance travelled (km):";
	cin >> distance;
	cout << "Enter average fuel consumption (km per litre):";
	cin >> average;
	cout << "Enter petrol price per litre;";
	cin >> price_per_litre;
	petrol_consumed=distance/average;
	total_cost=petrol_consumed*price_per_litre;
	cout << "Petrol Consumed = "<<petrol_consumed << "litres" << endl;
	cout << "Total Fuel Cost = Rs. " << total_cost;
	return 0;
}
