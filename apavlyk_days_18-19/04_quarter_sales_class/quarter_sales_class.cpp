#include <iostream>
#include "quarter_sales_class.h"

namespace SALES
{
	char * quarters[QUARTERS] = {"First quarter: ", "Second quarter: ", "Third quarter: ", "Fourth quarter: "};

	// copies the lesser of 4 or n items from the array ar
	// to the sales member of s and computes and stores the
	// average, maximum, and minimum values of the entered items;
	// remaining elements of sales, if any, set to 0
	Sales::Sales(const double ar[], int n)
	{
		min = ar[0];
		max = ar[0];		
		double sum = 0.0;

		for (int i = 0; i < n; i++) {
			if (ar[i] < min) {
				min = ar[i]; }
			if (ar[i] > max) {
				max = ar[i]; }
			sum += ar[i];
		}
		sales[0] = min;
		sales[1] = sales[2] = sales[3] = 0;
		average = sum / n;
	}
	// gathers sales for 4 quarters interactively, stores them
	// in the sales member of s and computes and stores the
	// average, maximum, and minimum values

	void Sales::SetSales()
	{
		double sum = 0;
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Please enter a value for " << quarters[i];
			std::cin >> sales[i];
		}

		min = sales[0];
		max = sales[0];

		for (int i = 0; i < QUARTERS; i++)
		{
			if (sales[i] < min) {
				min = sales[i]; }
			if (sales[i] > max) {
				max = sales[i]; }
			sum += sales[i];
		}
		average = sum / QUARTERS;
	}

	// display all information in structure s
	void Sales::show()
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << quarters[i] << sales[i] << std::endl;
		}

		std::cout << "Max Value: " << max << std::endl;
		std::cout << "Min Value: " << min << std::endl;
		std::cout << "Average Value: " << average << std::endl;
	}
}