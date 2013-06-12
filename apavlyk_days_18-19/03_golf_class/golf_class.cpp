#include <iostream>
#include "golf_class.h"

Golf::Golf(const char * name, int hc)
{
	strcpy_s(fullname, name);
	handicap = hc;
}
void Golf::setgolf()
{
	unsigned retval = 0;
	char name[Len];
	int handicap = 0;
	std::cout << "Please insert player's name: ";
	std::cin.getline(name, Len);
	std::cout << "Please insert player's handicap: ";
	std::cin >> handicap;
	Golf stock2 (name, handicap);
	*this = stock2;
}
void Golf::update_handicap(int hc)
{
	handicap = hc;
}
void Golf::show() const
{
	std::cout << "Golf player's name is " << fullname << std::endl;
	std::cout << "Golf player's handicap is " << handicap << std::endl;
}