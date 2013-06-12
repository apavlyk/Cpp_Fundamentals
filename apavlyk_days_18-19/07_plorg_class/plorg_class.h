#ifndef _PLORG_H_
#define _PLORG_H_

const int Len = 19;

class Plorg {
private:
	//static const int Len = 19;
	char name[Len];
	int ci;
public:
	Plorg(const char * str = "Plorga", int ci = 50);
	void setci(int index);
	void show() const;
};
#endif