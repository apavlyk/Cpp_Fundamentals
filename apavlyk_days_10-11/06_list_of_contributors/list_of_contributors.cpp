#include <iostream>
using namespace std;

const int ArSize = 30;
const int GDonation = 10000;
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

	cout << "Input number of contributors in the Society ";
	cout << "for the Preservation of Rightful Influence? ";
	(cin >> contributor_num).get();
	contributor * list_of_contributors = new contributor [contributor_num];

	for (int i = 0; i < contributor_num; i++)
	{
		cout << "Please, enter the name of contributor: ";
		cin.getline(list_of_contributors[i].contributor_name, ArSize);		
		cout << "Please, enter donated amount: ";
		(cin >> list_of_contributors[i].donate_amount).get(); // get() to remove new line character;

		list_of_contributors[i].donate_amount >= GDonation ? ++grand_patron_num : ++patron_num;		
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