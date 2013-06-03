#include <iostream>
#include <cctype>

using namespace std;
const int strsize = 55;
void showmenu();

void showmenu()
{
	cout << "Please enter one of the following choices: " << endl;
	cout << "a. display by name b. display by title" << endl
		<< "c. display by bop name d. display by preference" << endl
		<< "q. quit" << endl;
	cout << "Enter your choice: ";
};

int main()
{
	struct bop {
		char fullname[strsize]; // real name
		char title[strsize]; // job title
		char bopname[strsize]; // secret BOP name
		int preference; // 0 = fullname, 1 = title, 2 = bopname
	};
	int member_num = 0;
	char choice;

	cout << "Input number of members of Benevolent Order of Programmers: ";
	(cin >> member_num).get();
	bop * bop_members = new bop [member_num];

	for (int i = 0; i < member_num; i++)
	{
		cout << "Please, enter the name of member: ";
		cin.get(bop_members[i].fullname, strsize);
		cin.get();
		cout << "Please, enter the job title of member: ";		
		cin.get(bop_members[i].title, strsize);
		cin.get();
		cout << "Please, enter the bop name of member: ";
		cin.get(bop_members[i].bopname, strsize);
		cin.get();
		cout << "Please, enter member preference: ";
		(cin >> bop_members[i].preference).get(); // get() to remove new line character;
	}	
	
	showmenu();
	(cin >> choice).get();
	while (tolower(choice) != 'q')	{
		while (tolower(choice) != 'a') {
			if ((tolower(choice) != 'b') && (tolower(choice) != 'c') && 
				(tolower(choice) != 'd') && (tolower(choice) != 'q'))
			{
				cout << "Please enter a a, b, c, d or q to quit: ";
				(cin >> choice).get(); }
			else {
				break; }
		}

		if (tolower(choice) == 'q') { //to quit after incorrect choice
			break; }

		for (int i = 0; i < member_num; i++){
			switch (choice)
			{
			case 'A':
			case 'a' : cout << bop_members[i].fullname << endl;
				break;
			case 'B':
			case 'b' : cout << bop_members[i].title << endl;
				break;
			case 'C':
			case 'c' : cout << bop_members[i].bopname << endl;
				break; }

			if (tolower(choice) == 'd') {
				switch (bop_members[i].preference) {
				case 0: cout << bop_members[i].fullname << endl;
					break;
				case 1: cout << bop_members[i].title << endl;
					break;
				case 2: cout << bop_members[i].bopname << endl;
					break; }
			}

		}

		cout << "Next choice: ";
		(cin >> choice).get();
	}


	delete [] bop_members;
	cout << "The End";
	cin.get();
	return 0;
}