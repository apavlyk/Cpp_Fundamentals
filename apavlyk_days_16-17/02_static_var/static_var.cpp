#include <iostream>
#include <string>

using namespace std;

// function prototype
void strcount(const string &);
int main() 
{ 
	string input; 

	cout << "Enter a line: "; 
	getline(cin, input); 

	while (input != "")
	{ 		
		strcount(input); 

		cout << "Enter next line (empty line to quit) :\n"; 
		getline(cin, input);
	} 

	cout << "Bye" << endl; 
	system("PAUSE");
	return 0; 
} 

void strcount(const string & str) 
{ 
	static int total = 0; // static local variable 

	cout << "\"" << str << "\" contains "; 

	total += str.size(); 

	cout << str.size() << " characters\n"; 
	cout << total << " characters total\n";
}