#include <iostream>
#include <string>
using namespace std;

int main()
{	
	const string comma = ", ";
	cout << "Enter your first name: ";
	string f_name;
	getline(cin, f_name);
	cout << "Enter your last name: ";
	string l_name;
	getline(cin, l_name);
	string full_name;
	full_name = l_name;
	full_name += comma;
	full_name += f_name;	
	cout << "Here is the information in a single string: " << full_name;
	cin.get();
	return 0;
}