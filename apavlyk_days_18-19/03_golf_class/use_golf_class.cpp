#include <iostream>
#include "golf_class.h"

int main()
{
	using namespace std;
	char * name = "Tiger Woods";
	int hc = 20;
	int hc_new;

	//Create a new player
	Golf player1(name, hc);
	player1.show();

	//Update handicap
	cout << "Input new handicup for " << name << " player: ";	
	(cin >> hc_new).get();
	while (!cin) {
		cin.clear();
		while (cin.get() != '\n') {
			continue; }
		cout << "Input data is not number. Please, insert one more time: ";
		(cin >> hc_new).get();
	}
	player1.update_handicap(hc_new);
	player1.show();

	player1.setgolf();
	player1.show();

	system("PAUSE");
	return EXIT_SUCCESS;
}