#include <iostream>
#include <cmath>

const int inch_to_foot = 12;
const double inch_to_meter = 0.0254;
const double pound_to_kg = 2.2;

int main()
{
	using namespace std;
	int feet, inches, pounds;
	float bmi;
	cout << "How many feet in your height:" << endl;
	cin >> feet;
	cin.get();
	cout << "Insert residual iches in your height:" << endl;
	cin >> inches;
	cin.get();
	cout << "Insert your weight in pounds:" << endl;
	cin >> pounds;
	cin.get();
	bmi = (pounds / pound_to_kg) / pow(((feet * inch_to_foot + inches) * inch_to_meter), 2);
	cout << "Your bmi is equal " << bmi << endl;
	cin.get();
	return 0;
}