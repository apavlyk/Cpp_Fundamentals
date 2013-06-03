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
	CandyBar candy_list[3] =
	{
		{"Sweet ice", 75.5, 400},
		{"White snake", 123.7, 550},
		{"Preety fly", 170.88, 900}
	};
	cout << "1st item name " << candy_list[0].brand << ", weight " << candy_list[0].weight;
	cout << ", calories " << candy_list[0].calories << endl;
	cout << "2nd item name " << candy_list[1].brand << ", weight " << candy_list[1].weight;
	cout << ", calories " << candy_list[1].calories << endl;
	cout << "3d item name " << candy_list[2].brand << ", weight " << candy_list[2].weight;
	cout << ", calories " << candy_list[2].calories;
	cin.get();
	return 0;
}