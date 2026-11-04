#include <iostream>
using namespace std;
int main()
{
	float length, width, height;
	float volume, capacity_litres;
	cout << "Enter length, width and height in mrters:";
	cin >> length >> width >> height;
	volume=length*width*height;
	capacity_litres=volume*1000;
	cout << "Volume = " << volume << "cubic meters" << endl;
	cout << "Capacity= " << capacity_litres << "litres";
	return 0;
}
