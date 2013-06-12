#include <iostream>
#include <cctype> // or ctype.h
#include "stack_class.h"

int main()
{
	using namespace std;
	Stack st; // create an empty stack
	char ch;
	customer item;
	double total = 0.0;
	std::cout << "Please enter A to add a customer," << endl
		      << "P to process a customer, or Q to quit." << endl;
	while (cin >> ch && toupper(ch) != 'Q')
	{
			while (cin.get() != '\n')
				continue;
		if (!isalpha(ch))
		{
			std::cout << '\a';
			continue;
		}
		switch(ch)
		{
		case 'A':
		case 'a': std::cout << "Enter a customer to add" << endl;
			cout << "Enter customer name: ";
			cin.getline(item.fullname, Len);
			cout << "Enter customer payment: ";
			(cin >> item.payment).get();
			if (st.isfull())
				std::cout << "stack already full\n";
			else
				st.push(item);
			break;
		case 'P':
		case 'p': if (st.isempty())
					  std::cout << "stack already empty\n";
				  else {
					  st.pop(item);
					  std::cout << "Customer " << item.fullname << " popped" << endl;
					  total += item.payment;
					  std::cout << "Running Total is " << total << endl;
				  }
				  break;
		}
		std::cout << "Please enter A to add a customer," << endl
			<< "P to process a customer, or Q to quit." << endl;
	}
	std::cout << "Bye" << endl;
	
	std::system("PAUSE");
	return EXIT_SUCCESS;
}