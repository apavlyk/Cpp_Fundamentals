#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int SIZE = 255;

int main()
{
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open()) {
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating." << endl;
		exit(EXIT_FAILURE); }

	int ch_count = 0;
	char ch;
	inFile.get(ch);
	while (inFile.good()) {
		++ch_count;
		inFile.get(ch);
	}
	if (inFile.eof()) {
		cout << "End of file reached" << endl; }
	else if (inFile.fail()) {
		cout << "Input terminated by type mismatch" << endl; }
	else {
		cout << "Unexpected error occurs"; }
	cout << ch_count << " characters in the " << filename << " file";

	cin.get();
	return 0;
}