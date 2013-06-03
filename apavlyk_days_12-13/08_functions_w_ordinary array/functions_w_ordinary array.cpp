#include <iostream>
const size_t SEASONS = 4;
const char * season[SEASONS] =
{"Spring", "Summer", "Fall", "Winter"};

// function to modify array object
void fill(double *, double *);
// function that uses array object without modifying it
void show(double [], size_t);
void clear_stream(void);

int main()
{
	double expenses [SEASONS];
	double * pa = expenses;	
	fill(pa, (pa + SEASONS));
	show(expenses, SEASONS);
	std::cin.get();
	return EXIT_SUCCESS;
}

void fill(double * pa, double * size)
{
	using namespace std;
	int i;
	for (pa, i = 0; pa < size; pa++, i++)
	{
		cout << "Enter " << season[i] << " expenses: ";
		cin >> *pa;
	}
	clear_stream();

}
void show(double arr[], size_t size)
{
	using namespace std;
	double total = 0.0;
	cout << endl << "EXPENSES" << endl;
	for (unsigned int i = 0; i < size; i++)
	{
		cout << season[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}
	cout << "Total Expenses: $" << total << endl;
}

void clear_stream(void)
{
	std::cin.clear();
	while (std::cin.get() != '\n') {
		continue;  }
}