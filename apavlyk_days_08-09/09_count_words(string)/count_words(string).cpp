#include <iostream>
#include <ctime>
#include <string>

using namespace std;
const string stop_word = "done";

void wait_result_to_display()
{
	int TIME = 15;
	clock_t delay = TIME * CLOCKS_PER_SEC;
	clock_t wait_time = clock() + delay;
	while (clock() < wait_time)
		;
	cout << endl << "DONE";
}

int main()
{
	int word_count = 0;
	string word;
	
	cout << "Enter words (to stop, type the word " << stop_word << "):" << endl;
	do
	{		
		cin >> word;
		++word_count;
	}
	while (word != stop_word);
	cout << "You entered a total of " << --word_count << " words";

	wait_result_to_display();
	return 0;
}