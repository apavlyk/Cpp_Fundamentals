#include <iostream>
#include <cctype>
#include <ctime>
using namespace std;
const int ArSize = 500;

void wait_result_to_display();

void wait_result_to_display()
{
	int TIME = 25;
	clock_t delay = TIME * CLOCKS_PER_SEC;
	clock_t wait_time = clock() + delay;
	while (clock() < wait_time)
		;
	cout << endl << "DONE";
} 

int main()
{
	int word_count = 0;
	int vowel_words = 0;
	int consonant_words = 0;
	int other_words = 0;
	char * word = new char [ArSize];
	
	cout << "Enter words (q to quite):" << endl;
	do
	{		
		if (word_count == (ArSize - 1)) {
			cout << "Input limit is reached" << endl;
			break; }

		cin >> word;
		++word_count;

		if (isalpha(word[0])) {
			if (word[0] == 'a' || word[0] == 'A' ||
				word[0] == 'e' || word[0] == 'E' ||
				word[0] == 'i' || word[0] == 'I' ||
				word[0] == 'o' || word[0] == 'O' ||
				word[0] == 'u' || word[0] == 'U') {
					++vowel_words; }
			else {
				++consonant_words; }
		}
		else {
			++other_words; }

	} while (strcmp(word, "q") != 0);

	cout << vowel_words << " words beginning with vowels" << endl;
	cout << --consonant_words << " words beginning with consonants" << endl; // -- to exclude "q" from count
	cout << other_words << " others" << endl;
	
	delete [] word;
	wait_result_to_display();
	return 0;
}