#include <iostream>

const int hrs_in_day = 24;
const int m_in_hr = 60;
const int sec_in_m = 60;

int main()
{
	using namespace std;
	long long seconds;
	int days, hours, minutes, res_seconds;
	cout << "Enter a number of seconds:" << endl;
	cin >> seconds;
	cin.get();
	res_seconds = seconds % sec_in_m;
	minutes = (seconds / sec_in_m) % m_in_hr;
	hours = (seconds / sec_in_m / m_in_hr) % hrs_in_day;
	days = seconds / sec_in_m / m_in_hr / hrs_in_day;
	cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << res_seconds << " seconds";
	cin.get();
	return 0;
}