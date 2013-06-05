#include <iostream>

void repeat_string(const char * str, int times = 0);
void repeat_string(const char * str, int times, unsigned & repeat);

int main()
{
	using namespace std;
	unsigned repeat = 0;
	int times = 0, count = 3;
	char * str = "Hello world!";
	for (int i = 0; i < count; i++)
	{
		repeat_string(str, times, repeat);
		cout << repeat << " function call." << endl;
	}
	times = 5;
	repeat_string(str, times, repeat);

	cin.get();
	return EXIT_SUCCESS;
}

void repeat_string(const char * str, int times)
{
	using namespace std;
	if (times == 0) {
		cout << str << endl; }
	else {
		for (int i = 0; i < times; i++) {
			cout << str << endl; }
	}
}

void repeat_string(const char * str, int times, unsigned & repeat)
{
	if (times == 0) {
		repeat_string(str);
		repeat++; }
	else {
		repeat_string(str, repeat);		
		repeat++;	}
}