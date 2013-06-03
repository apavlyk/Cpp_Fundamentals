#include <iostream>
#include <ctime>
using namespace std;
const int ArSize = 50;

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
	int car_num = 0;
	struct car 
	{
		char prod_name[ArSize];
		int prod_year;
	};
	
	cout << "How many cars do you wish to catalog? ";
	cin >> car_num;
	cin.get(); //remove new line character
	car * car_data = new car [car_num];

	for (int i = 0; i < car_num; i++)
	{
		cout << "Car #" << ++i << ":" << endl;
		cout << "Please, enter the make: ";
		cin.getline(car_data[--i].prod_name, ArSize);		
		cout << "Please, enter the year made: ";
		cin >> car_data[i].prod_year;
		cin.get(); //remove new line character
	};

	cout << "Here is your collection" << endl;
	for (int i = 0; i < car_num; i++)
		cout << car_data[i].prod_year << " " << car_data[i].prod_name << endl;	
	
	wait_result_to_display();
	delete [] car_data;
	return 0;
}