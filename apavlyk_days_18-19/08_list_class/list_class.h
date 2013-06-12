#ifndef _LIST_H_
#define _LIST_H_

//const size_t Len = 35;
struct list_element { 
	int list_index; 
	double value; 
};

typedef list_element Item;
class List
{
private:
	enum {MAX = 4}; // constant specific to class
	Item items[MAX]; // holds stack items
	int top; // index for top stack item
public:
	List();
	bool isempty() const;
	bool isfull() const;
	// push() returns false if stack already is full, true otherwise
	bool push(Item & item); // add item to stack

	void visit(void (*pf)(Item & item));

	//// pop() returns false if stack already is empty, true otherwise
	//bool pop(Item & item); // pop top into item
};

void update_item(Item & item);

#endif