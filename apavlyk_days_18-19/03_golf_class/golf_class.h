#ifndef GOLF_CLASS_H_
#define GOLF_CLASS_H_
#include <iostream>

class Golf {
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	Golf(const char * name, int hc);
	void setgolf();
	void update_handicap(int hc);
	void show() const;
};
#endif;