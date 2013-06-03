#include <iostream>
const size_t Max = 7;

double *fill_array(double *, double *);
void show_array(const double *, const double *);
void revalue(double, double *, double *);
void clear_stream(void);

int main()
{
	using namespace std;
	double *pw = new double [Max];
	double *end = fill_array(pw, (pw + Max));
	show_array(pw, end);
	if (end != pw) {
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor)) // bad input
		{
			clear_stream();
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, pw, end);
		show_array(pw, end);
	}
	delete [] pw;
	cout << "Done!";
	cin.get();
	cin.get();
	return EXIT_SUCCESS;
}
double *fill_array(double *begin, double *end)
{
	using namespace std;
	double temp;
	int i;
	for (begin, i = 1; begin < end; begin++, i++)
	{
		cout << "Enter value #" << i << ": ";
		cin >> temp;
		if (!cin) // bad input
		{
			clear_stream();			
			cout << "Bad input; input process terminated." << endl;
			break;
		}
		else if (temp < 0) // signal to terminate
			break;
		*begin = temp;
	}
	return begin;
}

void show_array(const double *begin, const double *end)
{
	using namespace std;
	int i;
	for (begin, i = 1; begin < end; begin++, i++) {
		cout << "Property #" << i << ": $";
		cout << *begin << endl; }
}
// multiplies each element of array by r
void revalue(double r, double *begin, double *end)
{
	for (begin; begin < end; begin++) {
		(*begin) *= r; }
}

void clear_stream(void)
{
	std::cin.clear();
	while (std::cin.get() != '\n') {
		continue;  }
}