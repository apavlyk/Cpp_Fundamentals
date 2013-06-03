#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

const int ArSize = 30;
const int GDonation = 10000;
const char FileName[] = "List_of_Contributors.txt";
const char GPatron_header[] = "Grand Patrons";
const char Patron_header[] = "Patrons";
const char none[] = "none";

struct contributor 
{
	char contributor_name[ArSize];
	double donate_amount;
};
void show_contributor(contributor arr[], int length, bool grand);

void show_contributor(contributor arr[], int length, bool grand)
{
	for (int i = 0; i < length; i++)
	{
		if (grand) {
			if (arr[i].donate_amount >= GDonation) {
				std::cout << arr[i].contributor_name << endl; }
		}
		else {
			if (arr[i].donate_amount < GDonation) {
				std::cout << arr[i].contributor_name << endl; }
		}
	}
};


int main()
{
	int contributor_num = 0;
	unsigned int grand_patron_num = 0;
	unsigned int patron_num = 0;

	ifstream inFile;
	inFile.open(FileName);
	if (!inFile.is_open()) {
		cout << "Could not opent the file " << FileName << endl;
		cout << "Program terminating" << endl;
		exit(EXIT_FAILURE); }

	(inFile >> contributor_num).get();
	contributor * list_of_contributors = new contributor [contributor_num];
	int index = 0;
	if (contributor_num > 0) {
		while (inFile.good()) {
			for (int i = 1; i <= (contributor_num * 2); i++) {
				if ((i % 2) != 0) {
					index++;
					inFile.getline(list_of_contributors[index-1].contributor_name, ArSize); }
				else {
					(inFile >> list_of_contributors[index-1].donate_amount).get();  // get() to remove new line character
					list_of_contributors[index-1].donate_amount >= GDonation ? ++grand_patron_num : ++patron_num; }
			}
		}
		if (inFile.eof()) {
			cout << "End of file reached" << endl; }
		else if (inFile.fail()) {
			cout << "Input terminated by type mismatch" << endl; }
		else {
			cout << "Unexpected error occurs" << endl; }
	}
	
	if ((grand_patron_num == 0) && (patron_num == 0)) {
		cout << none; }
	else if ((grand_patron_num) > 0 && (patron_num == 0)) {
		cout << GPatron_header << endl;
		show_contributor(list_of_contributors, contributor_num, true);
		cout << Patron_header << endl;
		cout << none;
	}
	else if ((grand_patron_num) == 0 && (patron_num > 0)) {
		cout << GPatron_header << endl;
		cout << none << endl;
		cout << Patron_header << endl;
		show_contributor(list_of_contributors, contributor_num, false);
	}
	else if ((grand_patron_num) > 0 && (patron_num > 0)) {
		cout << GPatron_header << endl;
		show_contributor(list_of_contributors, contributor_num, true);
		cout << Patron_header << endl;
		show_contributor(list_of_contributors, contributor_num, false);
	}
	
	cin.get();
	delete [] list_of_contributors;
	return 0;
}