#include <iostream>

const float n_kms = 100.0;

int main()
{
	using namespace std;
	int liters, kms;
	float liters_per_km;
	cout << "Enter distance you have driven in kilometers: ";
	cin >> kms;
	cin.get();
	cout << "Enter how many liters of gasoline you have used: ";
	cin >> liters;
	cin.get();
	liters_per_km = (liters * n_kms)/ kms;
	cout << "You car has gotten " << liters_per_km << " liters per " << int(n_kms) << " kilometers"; 
	cin.get();
	return 0;
}