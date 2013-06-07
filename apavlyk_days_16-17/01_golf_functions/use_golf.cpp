#include <iostream>
using namespace std;

#include "golf.h"

int main()
{
	unsigned player_num = 0;

	cout << "Input number of golf players: ";	
	(cin >> player_num).get();
	while (!cin) {
		cin.clear();
		while (cin.get() != '\n') {
			continue; }
		cout << "Input data is not number. Please, insert one more time: ";
		(cin >> player_num).get();
	}
	golf * golf_players = new golf [player_num];

	unsigned actual_size = 0;
	for (unsigned i = 0; i < player_num; i++) {
		cout << "Player #" << i + 1 << endl;
		if (setgolf(golf_players[i]) == 1) {
			++actual_size; }
		else {
			break; }
	}

	//Show all golf players inserted
	for (unsigned i = 0; i < actual_size; i++) {
		showgolf(golf_players[i]); }

	//Update handicap for all players
	int new_hc = 0;
	cout << "Please, input new handicup value: ";
	(cin >> new_hc).get();
	for (unsigned i = 0; i < actual_size; i++) {
		handicap(golf_players[i], new_hc); }

	//Show all golf players once more
	for (unsigned i = 0; i < actual_size; i++) {
		showgolf(golf_players[i]); }

	delete [] golf_players;

	system("PAUSE");
	return EXIT_SUCCESS;
}