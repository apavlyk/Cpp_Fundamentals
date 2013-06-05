#define _CRT_SECURE_NO_WARNINGS // it is required to use strcpy function in Visual Studio 2012
#include <iostream>
#include <cstring> // for strlen(), strcpy()

using namespace std;

const size_t LEN = 80;

struct stringy {
	char * str; // points to a string
	int ct; // length of string (not counting '\0')
};

void set(stringy & beany, char * str);
void show(const stringy & beany, unsigned times = 1);
void show(const char * str, unsigned times = 1);

// prototypes for set(), show(), and show() go here
int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing); // first argument is a reference,
	// allocates space to hold copy of testing,
	// sets str member of beany to point to the
	// new block, copies testing to new block,
	// and sets ct member of beany
	show(beany); // prints member string once
	show(beany, 2); // prints member string twice
	cout << beany.ct << endl;
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing); // prints testing string once
	show(testing, 3); // prints testing string thrice
	show(beany);
	show("Done!");
	delete [] beany.str;
	cin.get();
	return EXIT_SUCCESS;
}

void set(stringy & beany, char * str)
{
	char * str_copy = new char [LEN];
	strcpy(str_copy, str);
	beany.str = str_copy;
	beany.ct = strlen(str_copy);
}

void show(const stringy & beany, unsigned times)
{
	for (unsigned i = 0; i < times; i++) {
		cout << beany.str << endl; }
}

void show(const char * str, unsigned times)
{
	for (unsigned i = 0; i < times; i++) {
		cout << str << endl; }
}