#include <iostream>
using namespace std;

double readValue(void);
bool readData(double &x, double &y);
double harmonic_calc(double, double);

int  main()
{
	double x = 0.0;
	double y = 0.0;
	double harmonic_value = 0.0;

	while ( readData(x, y) ) {
		cout << "Harmonic means of these numbers is " << harmonic_calc(x, y) << endl; }

	cout << "EXIT!";
	cin.get();

	return EXIT_SUCCESS;
}


double readValue(void)
{
	double value = 0.0;
	
	do {
		cout << "Please, insert number: ";
		(cin >> value).get();

		if ( cin.fail() )
		{
			cout << "Error, incorrect value. Please, enter a number: ";
			cin.clear();
			cin.sync();
			(cin >> value).get();
		}
	} while ( cin.fail() );
	
	return value;
}

bool readData(double &x, double &y)
{
	bool retval = true;

	x = readValue();
	y = readValue();

	if ( 0.0 == x || 0.0 == y) {
		retval = false; }

	return retval;
}

double harmonic_calc(double x, double y)
{
	double harmonic_value = (2.0 * x * y) / (x + y);
	return harmonic_value;
}