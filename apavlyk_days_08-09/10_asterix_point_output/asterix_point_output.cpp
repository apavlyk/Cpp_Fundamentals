#include <iostream>
#include <ctime>

using namespace std;
const char asterix = '*';
const char point = '.';

void wait_result_to_display()
{
	int TIME = 25;
	clock_t delay = TIME * CLOCKS_PER_SEC;
	clock_t wait_time = clock() + delay;
	while (clock() < wait_time)
		;
	cout << endl << "DONE";
}

int main()
{
	unsigned int row_num = 0;

	cout << "Enter number of rows: ";
	cin >> row_num;

	unsigned int loop_count = 0;
	for (unsigned int row_count = 0; row_count < row_num; row_count++)
	{
		loop_count++;
		for (unsigned int i = 0; i < row_num - loop_count; i++)
			cout << point;

		for (unsigned int j = 0; j < loop_count; j++)
			cout << asterix;
		
		cout << endl;
	}
     
	wait_result_to_display();
	return 0;
}