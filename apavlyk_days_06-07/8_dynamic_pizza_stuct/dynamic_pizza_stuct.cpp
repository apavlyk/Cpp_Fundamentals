#include <iostream>
const int arr_size = 30;
struct pizza
{
	char company_name[arr_size];
	unsigned int diameter;
	float weight;
};

int main()
{
	using namespace std;
	pizza * ps = new pizza;
	cout << "Insert company name: ";
	cin.getline(ps->company_name, arr_size);
	cout << "Insert pizza diameter (cm): ";
	cin >> ps->diameter;
	cout << "Insert pizza weight (kg): ";
	cin >> ps->weight;

	cout << "The name of pizza company is " << ps->company_name << endl;
	cout << "Diameter of the pizza is " << ps->diameter << " cm" << endl;
	cout << "Weight of the pizza is " << ps->weight << " kg" << endl;
	cin.get();
	cin.get();

	delete ps;
	return 0;
}