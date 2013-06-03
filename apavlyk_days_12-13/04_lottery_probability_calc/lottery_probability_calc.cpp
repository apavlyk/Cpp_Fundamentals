#include <iostream>
//#include <iomanip>

long double probability(unsigned numbers, unsigned picks, unsigned meganumbers);
void clear_stream(void);

int main()
{
	using namespace std;
	double total, choices, meganumber_total;
	cout << "Enter the total number of choices on the game card and" << endl
		<< "the number of picks allowed:" << endl;
	while ((cin >> total >> choices >> meganumber_total) && choices <= total)
	{
		cout << "You have one chance in ";
		cout.setf(std::ios_base::fixed);
		cout.precision(3);
		cout << probability(total, choices, meganumber_total);
		//cout << setiosflags(ios::fixed) << setprecision(4) << probability(total, choices, meganumber_total);
		cout << " of winning." << endl;
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Bye" << endl;
	clear_stream();
	cin.get();
	return EXIT_SUCCESS;
}

long double probability(unsigned numbers, unsigned picks, unsigned meganumbers)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p ; }
	
	result = result * meganumbers;
	return result;
}

void clear_stream(void)
{
	std::cin.clear();
	while (std::cin.get() != '\n') {
		continue;  }
}