#include <iostream>
#include <cctype>
using namespace std;
void showmenu();

void showmenu()
{
	cout << "Please enter one of the following choices: " << endl;
	cout << "c) carnivore p) pianist" << endl
		<< "t) tree g) game" << endl
		<< "or input Q to exit" << endl;
};

int main()
{	
	char choice;
	
	showmenu();
	(cin >> choice).get();
	while (tolower(choice) != 'q')
	{
		while (tolower(choice) != 'c') {
			if ((tolower(choice) != 'p') && (tolower(choice) != 't') && 
				(tolower(choice) != 'g') && (tolower(choice) != 'q')) 
			{
				cout << "Please enter a c, p, t, g or q to quit: ";
				(cin >> choice).get();
			}
			else
				break; }

		if (tolower(choice) == 'q') { //to quit after incorrect choice
			break; }
		
		switch (choice)
		{
			case 'C':
			case 'c' : cout << "Tiger is carnivore\n";
				break;
			case 'P':
			case 'p' : cout << "Pianist play the piano\n";
				break;
			case 'T':
			case 't' : cout << "A maple is a tree\n";
				break;
			case 'G':
			case 'g' : cout << "Packman is a game\n";
				break;
		}

			showmenu();
			(cin >> choice).get();
	}

	cout << "Bye!\n";
	cin.get();
	return 0;
}