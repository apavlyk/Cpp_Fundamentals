#include <iostream>
#include "plorg_class.h"

int main()
{
	Plorg plorg1;
	plorg1.show();
	std::cout << "----===||===----" << std::endl;

	char str[Len];
	int index;
	std::cout << "Please, insert plorg name: ";
	std::cin.getline(str, Len);
	std::cout << "Please, insert plorg contentment index: ";
	std::cin >> index;
	Plorg plorg2(str, index);
	plorg2.show();

	std::cout << "Please, insert new contentment index for plorg: ";
	std::cin >> index;	
	plorg2.setci(index);
	plorg2.show();

	system("PAUSE");
	return EXIT_SUCCESS;
}