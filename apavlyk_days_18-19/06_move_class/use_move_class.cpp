#include <iostream>
#include "move_class.h"

double input_number();

int main()
{
	std::cout << "Please insert 1st number: ";
	double num1 = input_number();
	std::cout << "Please insert 2nd number: ";
	double num2 = input_number();
	
	Move inst1(num1, num2);
	inst1.showmove();
	std::cout << "---------" << std::endl;

	Move inst2 = inst1.add(inst1);
	inst2.showmove();

	std::cout << "Please insert 3d number: ";
	double num3 = input_number();
	std::cout << "Please insert 4th number: ";
	double num4 = input_number();

	inst1.reset(num3, num4);
	inst1.showmove();

	system("PAUSE");
	return EXIT_SUCCESS;
}

double input_number()
{
	double num;
	(std::cin >> num).get();
	while (!(std::cin)) {
		std::cin.clear();
		while (std::cin.get() != '\n') {
			continue; }
		std::cout << "Input data is not number. Please, insert one more time: ";
		(std::cin >> num).get();
	}
	return num;
}