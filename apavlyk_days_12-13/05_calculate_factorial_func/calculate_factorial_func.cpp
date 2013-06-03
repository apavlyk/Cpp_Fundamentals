#include <iostream>

unsigned long calc_factorial(unsigned long);
void clear_stream(void);

int main()
{
	using namespace std;
	unsigned long num;
	cout << "Enter the number to calculate factorial" << endl;
	while (cin >> num)
	{
		cout.setf(std::ios_base::fixed);
		cout << num << "! = " << calc_factorial(num) << endl;
		cout << "Enter the next number (q to quit): ";
	}
	cout << "DONE!" << endl;
	clear_stream();
	cin.get();
	return EXIT_SUCCESS;
}

unsigned long calc_factorial(unsigned long num)
{
 unsigned long factorial = 1;
 if (num > 1) {
  factorial = num * calc_factorial(num - 1);
 }
 return factorial;
}

void clear_stream(void)
{
	std::cin.clear();
	while (std::cin.get() != '\n') {
		continue;  }
}