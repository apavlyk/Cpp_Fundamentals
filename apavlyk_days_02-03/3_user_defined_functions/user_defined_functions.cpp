#include <iostream>
void mice(void);
void see(void);

int main()
{
	using namespace std;
	mice();
	mice();
	see();
	see();
	cin.get();
	return 0;
}

void mice()
{
	using namespace std;
	cout << "Three blind mice" << endl;
}

void see()
{
	using namespace std;
	cout << "See how they run" << endl;
}