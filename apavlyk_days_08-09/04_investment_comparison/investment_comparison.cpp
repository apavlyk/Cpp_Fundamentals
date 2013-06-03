#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;
const float INIT_INV = 100.0;
const float PERC_1 = 0.1;
const float PERC_2 = 0.05;

void wait_result_to_display()
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
	int year = 1;
	float inv_1 = 0.0;
	float inv_2 = 0.0;
	float simple_ints = INIT_INV * PERC_1;

	do
	{
		inv_1 = INIT_INV + (year * simple_ints);
		cout << "Daphne's value of investment for " << year << " year(s): " << inv_1 << endl;

		inv_2 = (pow((1 + PERC_2), year)) * INIT_INV;
		cout << "Cleo's value of investment for " << year << " year(s): " << inv_2 << endl;
		++year;
	}while (inv_1 > inv_2);

	cout << "Cleo's investment exceeds Daphne's investment for "  << --year << " years" << endl;
	cout << "Daphne's investment is " << inv_1 << endl;
	cout << "Cleo's investment is " << inv_2 << endl;

	wait_result_to_display();
	return 0;
}