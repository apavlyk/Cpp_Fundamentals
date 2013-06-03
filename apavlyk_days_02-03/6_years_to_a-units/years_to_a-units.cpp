#include <iostream>
double convert_distance(double);

int main()
{
	using namespace std;
	double light_years;
	double units;
	cout << "Enter the number of light years:" << endl;
	cin >> light_years;
	cin.get();
	units = convert_distance(light_years);
	cout << light_years << " light years = " << units << " astronomical units." << endl;
	cin.get();
	return 0;
}

double convert_distance(double light_years)
{
	using namespace std;
	return light_years * 63240;
}