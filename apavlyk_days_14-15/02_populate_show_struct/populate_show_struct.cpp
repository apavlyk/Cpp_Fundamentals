#include <iostream>
using namespace std;
const size_t LEN = 30;

struct CandyBox {
	char * name;
	double weight;
	int calories;
};

void populate_struct(CandyBox & box, char * name = "Millennium Munch", double weight = 2.85, unsigned calories = 350);
void show_struct(const CandyBox & box);

int main()
{
	char name[LEN];
	double weight = 0.0;
	unsigned calories = 0;
	CandyBox one, default_box;
	cout << "Populate the candy box data: " << endl;
	cout << "Brand Name is ";
	cin.getline(name, LEN);
	cout << "Box weight is ";
	cin >> weight;
	cout << "Calories are ";
	cin >> calories;

	populate_struct(one, name, weight, calories);
	show_struct(one);

	populate_struct(default_box);
	cout << "Dafault box data: " << endl;
	show_struct(default_box);

	while (cin.get() != '\n') {
		continue; }

	cin.get();
	return EXIT_SUCCESS;
}

void populate_struct(CandyBox & box, char * name, double weight, unsigned calories)
{
	box.name = name;
	box.weight = weight;	
	box.calories = calories;
}

void show_struct(const CandyBox & box)
{
	cout << "Brand Name: " << box.name << endl;
	cout << "Box weight: " << box.weight << endl;
	cout << "Calories: " << box.calories << endl;
}