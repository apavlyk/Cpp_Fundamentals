#include <iostream>
#include <ctime>

using namespace std;
const int ArSize = 10;
void wait_result_to_display();

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
	double donation[ArSize] = {0};	
	double sum = 0.0;
	double average = 0.0;
	int act_size;
	int big_num = 0;

	for (act_size = 0; act_size < ArSize; act_size++)
	{
		cout << "Input array element #" << act_size << ": ";		
		if (!((cin >> donation[act_size]).get()))
		{
			cin.clear();
			break;
		}			
		else
			sum += donation[act_size];
	}
	
	
	average = sum / act_size;

	for (int i = 0; i < act_size; i++)
	{
		if (donation[i] > average)
			++big_num;
	}
	
	cout << "Avarage value is: " << average << endl;
	cout << "There are " << big_num << " numbers greater then avarage value";

	cin.get();
	cin.get();
	
	wait_result_to_display();
	return 0;
}