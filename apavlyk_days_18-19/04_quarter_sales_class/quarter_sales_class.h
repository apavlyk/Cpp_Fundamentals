namespace SALES
{
	const int QUARTERS = 4;

	#ifndef SALES_CLASS_H_
	#define SALES_CLASS_H_
    #include <iostream>

	class Sales {
	private:
		static const int QUARTERS = 4;
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales(const double ar[], int num);
		void SetSales();
		void show();
	};
#endif
}