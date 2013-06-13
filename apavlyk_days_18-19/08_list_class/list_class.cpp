#include <iostream>
#include "list_class.h"

List::List() // create an empty stack
{
	top = 0;
}
bool List::isempty() const
{
	return top == 0;
}
bool List::isfull() const
{
	return top == MAX;
}
bool List::push(Item & item)
{
		if (top < MAX)
		{
			items[top] = item;
			items[top].list_index = top++;
			return true;
		}
		else
			return false;
}

void List::visit(void (*pf)(Item & item))
{
	for (int i = 0; i < top; i++) {
		(*pf)(items[i]); }
}

void update_item(Item & item)
{
	double num;
	std::cout << "Input new value for " << item.list_index << " item" << std::endl;
	(std::cin >> num).get();
	while (!(std::cin)) {
		std::cin.clear();
		while (std::cin.get() != '\n') {
			continue; }
		std::cout << "Input data is not number. Please, insert one more time: ";
		(std::cin >> num).get();
	}
	item.value = num;
	std::cout << "The item " << item.list_index << " has value that is equal " 
		<< item.value << std::endl;
}