#include <iostream>
using namespace std;

int main()
{
	int num = 0; 
	int sum = 0;
		
	do
	{		
		cout << "Please, insert the number: ";
		cin >> num;
		sum += num;
		cout << "The sum of inserted numbers is " << sum << endl;
	}
	while (num != 0);

	cout << "DONE!";	
	return 0;
}