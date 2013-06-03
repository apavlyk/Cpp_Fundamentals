#include <iostream>
using namespace std;
struct CandyBar
{
	char brand[30];
	float weight;
	unsigned int calories;
};

int main()
{
	CandyBar snack =
	{
		"Mocha Munch",
		2.3,
		350
	};
	cout << "Snack name is " << snack.brand << endl;
	cout << "Snack weight is " << snack.weight << endl;
	cout << "Snack calories are " << snack.calories << endl;
	cin.get();
	return 0;
}