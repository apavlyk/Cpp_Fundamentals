#include <iostream>

int main()
{
	using namespace std;
	int years;
	cout << "Enter your age" << endl;
	cin >> years;
	cin.get();
	cout << "Your age in months " << years * 12 << endl;
	cin.get();
	return 0;
}