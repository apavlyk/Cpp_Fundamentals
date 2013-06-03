#include <iostream>
#include <array>
#include <ctime>
using namespace std;
const int ArSize = 100;

void wait_result_to_display()
{
	int TIME = 5;
	clock_t delay = TIME * CLOCKS_PER_SEC;
	clock_t wait_time = clock() + delay;
	while (clock() < wait_time)
		;
	cout << endl << "DONE";
}

int main()
{
	array<long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1L;

	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i-1];

	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;

	wait_result_to_display();
	return 0;
}