#include <iostream>

using namespace std;
const int tax_1 = 5000;
const int tax_2 = 10000;
const int tax_3 = 20000;
const int tax_4 = 35000;

const double perc_2 = 0.1;
const double perc_3 = 0.15;
const double perc_4 = 0.2;

int main()
{
	signed int money_earned = 0;
	double tax_to_pay1 = 0.0;
	double tax_to_pay2 = 0.0;

	cout.precision(2); // make cout output numbers with just 2 float points
	cout.setf(cout.fixed, cout.floatfield); // make cout output floating point values in fixed-point notation
	cout << "Please input your overall earnings: ";
	
	while (cin >> money_earned)
	{
		if (money_earned < 0)
		{
			break;
		}
		else if (money_earned > 0 && money_earned <= tax_1)
		{
			cout << "You earning is free of tax" << endl;
		}
		else if (money_earned > tax_1 && money_earned <= (tax_1 + tax_2))
		{
			cout << "You should pay tax: " << ((money_earned - tax_1) * perc_2) << endl;
		}
		else if (money_earned > (tax_1 + tax_2) && money_earned <= (tax_1 + tax_2 + tax_3))
		{
			tax_to_pay1 = ((money_earned - (tax_1 + tax_2)) * perc_3) + (tax_2 * perc_2);
			cout << "You should pay tax: " << tax_to_pay1 << endl;
		}
		else if (money_earned > (tax_1 + tax_2 + tax_3))
		{
			tax_to_pay2 = ((money_earned - (tax_1 + tax_2 + tax_3)) * perc_4) + (tax_3 * perc_3) + (tax_2 * perc_2);
			cout << "You should pay tax: " << tax_to_pay2 << endl;
		}

		cout << "Please, input your overall earnings: ";
	}
	cin.clear();
	cin.get();

	cout << "You input is incorrect." << endl;
	cout << "Tax calculation is terminated.";

	cin.get();
	cin.get();

	return 0;
}