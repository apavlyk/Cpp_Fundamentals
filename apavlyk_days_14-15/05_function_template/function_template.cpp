#include <iostream>
using namespace std;
const size_t LEN = 5;

template <typename T>
T max5(T arr[LEN]);

template <typename T>
void populate_array(T arr[LEN], char * type_name);

int main()
{
	double arr1[LEN];
	int arr2[LEN];
	
	populate_array(arr1, "double");
	cout << "The maximum value in this array: " << max5(arr1) << endl;
	populate_array(arr2, "int");
	cout << "The maximum value in this array: " << max5(arr2) << endl;

	while (cin.get() != '\n') {
		continue; }
	cin.get();
	return EXIT_SUCCESS;
}

template <typename T>
void populate_array(T arr[LEN], char * type_name)
{
	cout << "Input array consist of 5 " << type_name << " type members" << endl;
	for (unsigned i = 0; i < LEN; i++) {
		cout << "Input " << i+1 << " array member: ";
		cin >> arr[i]; }
}

template <typename T>
T max5(T arr[LEN])
{
	T max_val = arr[0];
	for (unsigned i = 0; i < LEN; i++) {
		if (max_val < arr[i]) {
			max_val = arr[i]; }
	}
	return max_val;
}