#include <iostream>

const float sec_in_min = 60.0;
const float min_in_degree = 60.0;

int main()
{
	using namespace std;
	int degrees, minutes, seconds;
	double dec_degrees;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cin.get();
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cin.get();
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	cin.get();
	dec_degrees = (minutes * sec_in_min + seconds)/(sec_in_min * min_in_degree);
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degrees + dec_degrees << " degrees";
	cin.get();
	return 0;
}