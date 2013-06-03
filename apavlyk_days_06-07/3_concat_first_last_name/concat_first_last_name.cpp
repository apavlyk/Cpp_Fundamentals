#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int arr_size = 25;
	const char comma[3] = ", ";
	cout << "Enter your first name: ";
	char f_name[arr_size];
	cin.getline(f_name, arr_size);
	cout << "Enter your last name: ";
	char l_name[arr_size];
	cin.getline(l_name, arr_size);
	char full_name[arr_size + 3 + arr_size + 1];
	strcpy(full_name, l_name);
	strcat(full_name, comma);
	strcat(full_name, f_name);
	strcat(full_name, "\0");
	cout << "Here is the information in a single string: " << full_name;
	cin.get();
	return 0;
}