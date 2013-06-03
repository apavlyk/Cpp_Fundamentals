#include <iostream>
using namespace std;
size_t  const SIZE = 7;

size_t fill_array(double [], size_t);
void show_array(double [], size_t);
void reverse_array(double [], size_t);
void clear_stream(void);


int main()
{
	double arr[SIZE] = {0.0};
	size_t actual_size = fill_array(arr, SIZE);

	double * pt = arr;
	pt++;
	reverse_array(pt, actual_size - 2);

	show_array(arr, actual_size);
	
	cout << "DONE!" << endl;
	cin.get();
	return EXIT_SUCCESS;
}

size_t fill_array(double arr[], size_t size)
{	
	size_t act_size;
	for (act_size = 0; act_size < size; act_size++)	{
		cout << "Input array element #" << act_size + 1 << ": ";		
		if (!(cin >> arr[act_size])) {
			clear_stream();
			break; }			
	}	
	return act_size;
}

void show_array(double arr[], size_t size)
{
	for (unsigned int i = 0; i < size; i++) {
		cout << "Array element #" << i + 1 << " is " << arr[i] << endl; }
}

void reverse_array(double arr[], size_t size)
{
	double temp;
	unsigned int i, j;
	for (i = 0, j = size - 1; i < j; i++, j--) {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp; }
}

void clear_stream(void)
{
	std::cin.clear();
	while (std::cin.get() != '\n') {
		continue;  }
}