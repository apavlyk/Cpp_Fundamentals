#include <iostream>
#include <string>
#include "person_class.h"

Person::Person(const std::string & ln, const char * fn)
{
	lname = ln;
	strcpy_s(fname, fn);
}

// the following methods display lname and fname
void Person::Show() const // firstname lastname format
{
	std::cout << "The person fullname is ";
	std::cout << fname << " " << lname << std::endl;
}
void Person::FormalShow() const // lastname, firstname format
{
	std::cout << "The person fullname is ";
	std::cout << lname << " " << fname << std::endl;
}