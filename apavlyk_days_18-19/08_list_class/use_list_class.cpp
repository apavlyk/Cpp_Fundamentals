#include <iostream>
#include "list_class.h"

int main()
{
	using namespace std;
	List list;
	list_element item;
	char ch;
	double total = 0.0;
	std::cout << "Please enter A to add a list element, "
		      << "or Q to quit." << endl;
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
		case 'a': std::cout << "Enter a list element to add" << endl;			
			item.list_index = 0;
			cout << "Enter list element value: ";
			(cin >> item.value).get();
			if (list.isfull())
				std::cout << "stack already full\n";
			else
				list.push(item);
			break;
		//case 'P':
		//case 'p': if (st.isempty())
		//			  std::cout << "stack already empty\n";
		//		  else {
		//			  st.pop(item);
		//			  std::cout << "Customer " << item.fullname << " popped" << endl;
		//			  total += item.payment;
		//			  std::cout << "Running Total is " << total << endl;
		//		  }
		//		  break;
		}
		std::cout << "Please enter A to add a list element, "
			<< "or Q to quit." << endl;
	}
	list.visit(update_item);
	std::cout << "Bye" << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}