#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char ch;
	do
	{
		cin.get(ch);
		if ((ch != '@') && (!isdigit(ch)))
		{
			if (isupper(ch))
				ch = tolower(ch);
			else
				ch = toupper(ch);
			cout << ch;
		}
	} while (ch != '@');

	return 0;
}