#include <iostream>
using namespace std;
const int ArSize = 10;
 
int populate_array(int*, int*);
double show_values(int*, int*);
double average_calculation(double, int);
void clear_stream(void);

int main()
{
	int* golf_score = new int [ArSize];

	int actual_size = populate_array(golf_score, (golf_score + ArSize));

	double sum = show_values(golf_score, (golf_score + actual_size));

	cout << average_calculation(sum, actual_size);

	delete [] golf_score;
	cin.get();
	return EXIT_SUCCESS;
}

int populate_array(int* arr, int* size)
{
	int value = 0;
	int actual_size = 0;
	for (arr; arr < size; arr++) {		
		cout << "Input " << actual_size + 1 << " array member ";
		cout << "(To interrupt input enter any non-numeric value): ";

		if (!((cin >> value))) {
			clear_stream();
			break; }

		*arr = value;
		actual_size++; }
	
	return actual_size;
}

 double show_values(int* arr, int* size)
 {
	 double sum = 0;
	 for (arr; arr < size; arr++) {
		 if (arr == (size - 1)) {
			 cout << *arr; }
		 else { 
			 cout << *arr << ", "; }

		 sum += *arr;
	 }
	 cout << endl;
	 return sum;
 }

double average_calculation(double sum, int actual_size)
{
	double average = 0.0;
	average = (sum / actual_size);
	return average;
}

void clear_stream(void)
{
	cin.clear();
	while (cin.get() != '\n') {
		continue;  }
}