#include <iostream>
const int arr_size = 3;

int main()
{
	using namespace std;
	float dash_results[arr_size];
	cout << "Insert time for 1st 40-meter dash: ";
	cin >> dash_results[0];
	cout << "Insert time for 2nd 40-meter dash: ";
	cin >> dash_results[1];
	cout << "Insert time for 3d 40-meter dash: ";
	cin >> dash_results[2];
	float average_result = (dash_results[0] + dash_results[1] + dash_results[2] ) / arr_size;
	cout << "Time for 1st dash is " << dash_results[0] << " sec" << endl;
	cout << "Time for 2nd dash is " << dash_results[1] << " sec" << endl;
	cout << "Time for 3d dash is " << dash_results[2] << " sec" << endl;
	cout << "Average time is " << average_result << " sec";
	cin.get();
	cin.get();
	return 0;
}