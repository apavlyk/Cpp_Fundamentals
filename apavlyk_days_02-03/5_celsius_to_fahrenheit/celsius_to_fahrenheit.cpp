#include <iostream>
double convert_t(int);

int main()
{
	using namespace std;
	int celsius;
	double fahrenheit;
	cout << "Please enter a Celsius value:" << endl;
	cin >> celsius;
	cin.get();
	fahrenheit = convert_t(celsius);
	cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;
	cin.get();
	return 0;
}

double convert_t(int celsius)
{
	return 1.8 * celsius + 32.0;
}