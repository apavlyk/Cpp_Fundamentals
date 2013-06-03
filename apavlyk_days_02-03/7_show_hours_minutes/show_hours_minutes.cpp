#include <iostream>
void display_time(int, int);

int main()
{
	using namespace std;
	int hours;
	int minutes;
	cout << "Enter the number of hours:" << endl;
	cin >> hours;
	cout << "Enter the number of minutes:" << endl;
	cin >> minutes;
	cin.get();
	display_time(hours, minutes);
	cin.get();
	return 0;
}
void display_time(int hours, int minutes)
{
	using namespace std;
	cout << "Time: " << hours << ":" << minutes;
}