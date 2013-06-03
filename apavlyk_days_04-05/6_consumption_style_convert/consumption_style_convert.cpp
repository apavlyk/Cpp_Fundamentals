#include <iostream>

const double km_miles = 62.14;
const double liter_gallon = 3.875;

int main()
{
	using namespace std;
	float liter_per_km, gallon_per_mile;
	cout << "Enter a car consumption in liters per 100 kilometers: ";
	cin >> liter_per_km;
	cin.get();
	gallon_per_mile = km_miles * liter_gallon / liter_per_km;
	cout << liter_per_km << " liters per 100 kilometers are " << gallon_per_mile << " miles per gallon (mpg)";
	cin.get();
	return 0;
}