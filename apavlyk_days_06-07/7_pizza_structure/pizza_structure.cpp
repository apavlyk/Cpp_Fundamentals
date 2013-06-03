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
	pizza ital_pz;
	cout << "Insert company name: ";
	cin.getline(ital_pz.company_name, arr_size);
	cout << "Insert pizza diameter (cm): ";
	cin >> ital_pz.diameter;
	cout << "Insert pizza weight (kg): ";
	cin >> ital_pz.weight;

	cout << "The name of pizza company is " << ital_pz.company_name << endl;
	cout << "Diameter of the pizza is " << ital_pz.diameter << " cm" << endl;
	cout << "Weight of the pizza is " << ital_pz.weight << " kg" << endl;
	cin.get();
	cin.get();
	return 0;
}