#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter your name: ";
	string name;
	getline(cin, name);
	cout << "Enter your favorite desert: ";
	string dessert;
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name  << "." << endl;
	cin.get();
	return 0;
}