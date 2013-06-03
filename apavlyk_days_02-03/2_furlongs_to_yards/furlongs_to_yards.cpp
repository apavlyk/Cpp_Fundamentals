#include <iostream>

int main()
{
	using namespace std;
	int furlongs;
	cout << "Please insert distance in furlongs" << endl;	
	cin >> furlongs;
	cin.get();
	cout << furlongs << " furlongs are equal " << furlongs * 220 << " yards" << endl;
	cin.get();
	return 0;
}