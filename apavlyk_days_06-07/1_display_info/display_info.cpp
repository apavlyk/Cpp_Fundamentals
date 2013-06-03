# include <iostream>

int main()
{
	using namespace std;
	const int name_length = 40;	
	cout << "What is your first name? ";
	char f_name[name_length];
	cin.getline(f_name, name_length);
	cout << "What is your last name? ";
	char l_name[name_length];
	cin.getline(l_name, name_length);
	cout << "What letter grade do you deserve? ";
	char grade;
	cin >> grade;
	grade = grade + 1;
	cout << "What is your age? ";
	unsigned int age;
	cin >> age;
	cout << "Name " << l_name << ", " << f_name << endl;
	cout << "Grade " << grade << endl;
	cout << "Age " << age;
	cin.get();
	cin.get();
	return 0;
}