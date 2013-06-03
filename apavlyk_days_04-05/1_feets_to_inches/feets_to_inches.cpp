#include <iostream>
const int inches_in_foot = 12;

int main()
{
	using namespace std;
	int inches;
	cout << "Insert your height in inches:" << endl;
	cin >> inches;
	cin.get();
	cout << "Your height is " << inches / inches_in_foot << " foots, " << inches % inches_in_foot << " inches" << endl;
	cin.get();
	return 0;
}