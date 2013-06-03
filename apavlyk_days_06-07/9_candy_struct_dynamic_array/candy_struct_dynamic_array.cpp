#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar
{
	char brand[30];
	float weight;
	unsigned int calories;
};

int main()
{
	//CandyBar sweet1, sweet2, sweet3;
	CandyBar * sweets = new CandyBar [3];
	strcpy(sweets[0].brand, "Sweet ice");
	sweets[0].weight = 75.5;
	sweets[0].calories = 400;
	strcpy(sweets[1].brand, "White snake");
	sweets[1].weight = 123.7;
	sweets[1].calories = 550;
	strcpy(sweets[2].brand, "Preety fly");
	sweets[2].weight = 170.88;
	sweets[2].calories = 900;

	cout << "1st item name " << sweets[0].brand << ", weight " << sweets[0].weight;
	cout << ", calories " << sweets[0].calories << endl;
	cout << "2nd item name " << sweets[1].brand << ", weight " << sweets[1].weight;
	cout << ", calories " << sweets[1].calories << endl;
	cout << "3d item name " << sweets[2].brand << ", weight " << sweets[2].weight;
	cout << ", calories " << sweets[2].calories;

	delete [] sweets;
	cin.get();
	return 0;
}