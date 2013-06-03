#include <iostream>
#include <ctime>
#include <string>
using namespace std;
const int ArSize = 12;

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
	string months[ArSize] = {"January", "February", "March", "April", "May", "June", "Jully", "August", "September", "October", "November", "December"};
	unsigned int book_num[ArSize] = {0};
	int i;
	unsigned int sum = 0;

	for (i = 0; i < ArSize; i++)
	{
		cout << "Insert number of books sold for " << months[i] << ": ";
		cin >> book_num[i];
	}

	for (i = 0; i < ArSize; i++)
		sum += book_num[i];
	cout << "Total sales for the year are " << sum << " books";

	wait_for_result_to_display();
	return 0;
}