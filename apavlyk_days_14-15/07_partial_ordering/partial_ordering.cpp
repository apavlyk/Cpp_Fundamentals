#include <iostream>
using namespace std;

template <typename T> // template A
T SumArray(T arr[], int n);
template <typename T> // template B
T SumArray(T * arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	int things[6] = {13, 31, 103, 301, 310, 130};
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[3];
	// set pointers to the amount members of the structures in mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	
	cout << "Sum of all things: " << SumArray(things, 6) << endl; // uses template A

	cout << "Sum of all debts: " << SumArray(pd, 3) << endl; // uses template B
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

template <typename T>
T SumArray(T arr[], int n)
{
	T summ = 0;
	cout << "template A" << endl;
	for (int i = 0; i < n; i++) {
		summ += arr[i]; }		
	
	return summ;
}

template <typename T>
T SumArray(T * arr[], int n)
{
	T summ = 0;
	cout << "template B" << endl;
	for (int i = 0; i < n; i++) {
		summ += *arr[i]; }
	
	return summ;
}