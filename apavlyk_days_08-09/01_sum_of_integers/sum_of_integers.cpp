#include <iostream>
#include <ctime>
using namespace std;

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
	int start_num, init_start_num, end_num, sum;
	cout << "Please, insert smaller number: ";
	cin >> start_num;
	cout << "Please, insert greater number: ";
	cin >> end_num;

	init_start_num = start_num;
	for (sum = 0; start_num <= end_num; start_num++)
		sum += start_num;

	cout << "Sum of all the integers from " << init_start_num << " through " << end_num;
	cout << " is " << sum;

	wait_result_to_display();
	return 0;
}