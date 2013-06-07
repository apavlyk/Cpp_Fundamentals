#include <iostream>
#include "Sales.h"

int main()
{
	using namespace std;
	SALES::Sales st1;
	memset(&st1, 0, sizeof(st1));

	SALES::Sales st2;
	memset(&st2, 0, sizeof(st2));

	double arr[SALES::QUARTERS] = {5.7, 2.3, 10.0, 4.0};
	SALES::setSales(st1, arr, SALES::QUARTERS);
	cout << endl << "First Structure" << endl;
	SALES::showSales(st1);

	cout << "-------------------------------------" << endl;

	cout << endl << "Second Structure" << endl;
	SALES::setSales(st2);
	SALES::showSales(st2);

	system("PAUSE");
	return EXIT_SUCCESS;
}