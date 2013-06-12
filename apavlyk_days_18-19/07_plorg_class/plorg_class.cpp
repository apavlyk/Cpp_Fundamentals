#include <iostream>
#include "plorg_class.h"

Plorg::Plorg(const char * str, int index)
{
	strcpy_s(name, str);
	ci = index;
}
void Plorg::setci(int index)
{
	ci = index;
}
void Plorg::show() const
{
	std::cout << "Plorg " << name << " has contentment index that is equal " 
		      << ci << std::endl;
}