#include <iostream>
using namespace std;
int main()
{
	float s1, s2, s3, s4, s5;
	float total, average, percentage;
	cout << "Enter marks of 5 subects (out of 100):";
	cin >> s1 >> s2 >> s3 >> s4 >> s5;
	total = s1 + s2 + s3 + s4 + s5;
	average = total / 5;
	percentage = ( total / 500)*100;
	cout << "Total Marks = " << total << endl;
	cout << "Average Marks = " << average << endl;
	cout << "Percentage = " << percentage << "%";
	return 0;
	}
