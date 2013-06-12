#include <iostream>
#include "quarter_sales_class.h"

int main()
{
	using namespace SALES;

	double arr[QUARTERS] = {5.7, 2.3, 10.0, 4.0};
	Sales qsales1(arr, QUARTERS);
	std::cout << std::endl << "First Structure" << std::endl;
	qsales1.show();

	std::cout << "-------------------------------------" << std::endl;

	std::cout << std::endl << "Second Structure" << std::endl;
	qsales1.SetSales();
	qsales1.show();

	system("PAUSE");
	return EXIT_SUCCESS;
}