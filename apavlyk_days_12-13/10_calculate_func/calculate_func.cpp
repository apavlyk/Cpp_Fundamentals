#include <iostream>
size_t const SIZE = 2;
double add(double, double);
double add_alternate(double, double);
double calculate(double, double, double (*pf)(double, double));
void clear_stream(void);

int main()
{
	using namespace std;
	double (*pf_array[SIZE])(double, double) = {(*add), (*add_alternate)};
	double x = 1.0, y = 1.0;
	while( (x != 0.0) || (y != 0.0) ){
		cout << "Enter values: ";
		cin >> x >> y;
		if (!cin) {
			cin.clear(); 
			clear_stream();
			cout << "Bad input; input process terminated." << endl;
			break;
		}
		for (size_t i = 0; i < SIZE; i++) {
			cout << calculate(x, y, pf_array[i]) << endl;
		}

	}
	clear_stream();
	cout << "DONE!";
	cin.get();
	return EXIT_SUCCESS;
}

double add(double x, double y)
{
	return x + y;
}

double add_alternate(double x, double y)
{
	std:: cout << "Functuion calculates sum of " << x << " and " << y << std::endl;
	return x + y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
	return pf(x, y);
}

void clear_stream(void)
{
	std::cin.clear();
	while (std::cin.get() != '\n') {
		continue;  }
}