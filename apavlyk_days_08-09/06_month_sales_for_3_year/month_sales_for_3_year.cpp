#include <iostream>
#include <ctime>
using namespace std;
const int MONTHS = 12;
const int YEARS = 3;

void wait_for_result_to_display()
{
	int TIME = 15;
	clock_t delay = TIME * CLOCKS_PER_SEC;
	clock_t wait_time = clock() + delay;
	while (clock() < wait_time)
		;
	cout << endl << "DONE";
}

int main()
{
	const char * months[MONTHS] = {
	"January", "February", "March", "April",
	"May", "June", "Jully", "August",
	"September", "October", "November", "December"};
	
	unsigned int sales[YEARS][MONTHS] = {0};
	unsigned int each_year_sum = 0;
	unsigned int combined_years_sum = 0;

	for (int month = 0; month < MONTHS; month++)
	{
		for (int year = 0; year < YEARS; year++)
		{
			cout << "Insert number of books sold for " << months[month];
			cout << " " << year << " year: ";
			cin >> sales[year][month];
		}
	};
	
	int year;
	for (year = 0; year < YEARS; year++)
	{
		each_year_sum = 0;
		for (int month = 0; month < MONTHS; month++)
			each_year_sum += sales[year][month];

		cout << "Total sales for the " << year << " year are ";
		cout << each_year_sum << " books" << endl;

		combined_years_sum += each_year_sum;		
	};
	cout << "Total sales for the " << year << "years are " << combined_years_sum << endl;

	wait_for_result_to_display();
	return 0;
}