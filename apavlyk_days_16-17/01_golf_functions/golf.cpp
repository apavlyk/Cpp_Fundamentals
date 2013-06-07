#include <iostream>
using namespace std;

#include "golf.h"

// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
void setgolf(golf & g, const char * name, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g)
{
	//unsigned retval = 0;
	//cout << "Please insert player's name :";
	//cin.getline(g.fullname, Len);
	//if (g.fullname[0] != '\0') {
	//	retval = 1; }

	//cout << "Please insert player's handicap :";
	//cin >> g.handicap;

	unsigned retval = 0;
	char name[Len];
	int handicap = 0;
	cout << "Please insert player's name: ";
	cin.getline(name, Len);
	cout << "Please insert player's handicap: ";
	cin >> handicap;

	setgolf(g, name, handicap);

	if (name[0] != '\0') {
		retval = 1; }

	while (cin.get() != '\n') {
		continue; }

	return retval;
}

// function resets handicap to new value
void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

// function displays contents of golf structure
void showgolf(const golf & g)
{
	cout << "Golf player's name is " << g.fullname << endl;
	cout << "Golf player's handicap is " << g.handicap << endl;
}