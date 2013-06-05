#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void update_str_to_upper(string & str);

int main()
{
	string str;
	cout << "Enter a string (q to quit): ";
	getline(cin, str);
	while (str != "q")
	{
		update_str_to_upper(str);
		cout << str;
		cout << endl << "Next string (q to quit): ";
		getline(cin, str);
	}
	
	cout << "Bye." << endl;
	while (cin.get() != '\n') {
		continue; }
	return EXIT_SUCCESS;
}

void update_str_to_upper(string & str)
{
	for (unsigned i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]); }
}