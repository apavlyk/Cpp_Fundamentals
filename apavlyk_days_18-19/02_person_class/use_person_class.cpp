#include <iostream>
#include <string>
#include "person_class.h"

int main()
{
	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one default argument
	Person three("Dimwiddy", "Sam"); // use #2, no defaults
	one.Show();
	std::cout << std::endl;
	one.FormalShow();

	two.Show();
	std::cout << std::endl;
	two.FormalShow();
	
	three.Show();
	std::cout << std::endl;
	three.FormalShow();

	system("PAUSE");
	return EXIT_SUCCESS;
}