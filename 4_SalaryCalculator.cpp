#include <iostream>
using namespace std;
int main()
{
  float basic_salary, house_rent_allowance, medical_allowance, gross_salary;
  cout << "Enter basic salary:";
  cin >> basic_salary;
  cout << " Enter house rent allowance:";
  cin >> house_rent_allowance;
  cout << "Enter medical allowance:";
  cin >> medical_allowance;
  gross_salary = basic_salary + house_rent_allowance + medical_allowance;
  cout << "Gross Salary = Rs." << gross_salary;
  return 0;	
}
