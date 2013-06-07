#include <iostream>
#include "Sales.h"


namespace SALES
{
	char * quarters[QUARTERS] = {"First quarter: ", "Second quarter: ", "Third quarter: ", "Fourth quarter: "};

	// copies the lesser of 4 or n items from the array ar
	// to the sales member of s and computes and stores the
	// average, maximum, and minimum values of the entered items;
	// remaining elements of sales, if any, set to 0
	void setSales(Sales & s, const double ar[], int n)
	{
		s.min = ar[0];
		s.max = ar[0];
		double sum = 0.0;

		for (unsigned i = 0; i < n; i++) {
			if (ar[i] < s.min) {
				s.min = ar[i]; }
			if (ar[i] > s.max) {
				s.max = ar[i]; }
			sum += ar[i];
		}
		s.sales[0] = s.min;
		s.average = sum / n;
	}
	// gathers sales for 4 quarters interactively, stores them
	// in the sales member of s and computes and stores the
	// average, maximum, and minimum values

	void setSales(Sales & s)
	{
		double sum = 0;
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Please enter a value for " << quarters[i];
			std::cin >> s.sales[i];
		}

		s.min = s.sales[0];
		s.max = s.sales[0];

		for (int i = 0; i < QUARTERS; i++)
		{
			if (s.sales[i] < s.min) {
				s.min = s.sales[i]; }
			if (s.sales[i] > s.max) {
				s.max = s.sales[i]; }
			sum += s.sales[i];
		}
		s.average = sum / QUARTERS;
	}

	// display all information in structure s
	void showSales(const Sales & s)
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << quarters[i] << s.sales[i] << std::endl;
		}

		std::cout << "Max Value: " << s.max << std::endl;
		std::cout << "Min Value: " << s.min << std::endl;
		std::cout << "Average Value: " << s.average << std::endl;
	}
}