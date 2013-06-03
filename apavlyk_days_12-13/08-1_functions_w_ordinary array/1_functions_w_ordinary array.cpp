#include <iostream>
const size_t SEASONS = 4;
const char * season[SEASONS] =
{"Spring", "Summer", "Fall", "Winter"};
struct expenses {
	double season_exp[SEASONS];
};

// function to modify array as struct member
void fill(expenses *);
// function that uses array as struct member without modifying it
void show(expenses);
void clear_stream(void);

int main()
{
	expenses * annual_expenses = new expenses;
	fill(annual_expenses);
	show(*annual_expenses);
	delete annual_expenses;
	std::cin.get();
	return EXIT_SUCCESS;
}

void fill(expenses * pa)
{
	using namespace std;
	for (unsigned int i = 0; i < SEASONS; i++)
	{
		cout << "Enter " << season[i] << " expenses: ";
		cin >> pa->season_exp[i];
	}
	clear_stream();
}
void show(expenses annual)
{
	using namespace std;
	double total = 0.0;
	cout << endl << "EXPENSES" << endl;
	for (unsigned int i = 0; i < SEASONS; i++)
	{
		cout << season[i] << ": $" << annual.season_exp[i] << endl;
		total += annual.season_exp[i];
	}
	cout << "Total Expenses: $" << total << endl;
}

void clear_stream(void)
{
	std::cin.clear();
	while (std::cin.get() != '\n') {
		continue;  }
}