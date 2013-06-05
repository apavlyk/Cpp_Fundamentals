#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T arr[], size_t n);

template <> char * maxn<char *>(char * str[], size_t n);

template <typename T>
void populate_array(T arr[], size_t n, char * type_name);


int main()
{
	const size_t double_n = 4;
	const size_t int_n = 6;
	const size_t char_n = 5;
	double arr1[double_n];
	int arr2[int_n];
	
	populate_array(arr1, double_n, "double");
	cout << "The maximum value in this array: " << maxn(arr1, double_n) << endl;
	populate_array(arr2, int_n, "int");
	cout << "The maximum value in this array: " << maxn(arr2, int_n) << endl;
	
	char * ch_str_array[char_n] = {"Test_string", "Another_string", "1234567_string", "JustString", "RepeatOneMore"};
	cout << "The maximum string in array: " << maxn(ch_str_array, char_n);

	while (cin.get() != '\n') {
		continue; }
	cin.get();
	return EXIT_SUCCESS;
}

template <typename T>
T maxn(T arr[], size_t n)
{
	T max_val = arr[0];
	for (unsigned i = 0; i < n; i++) {
		if (max_val < arr[i]) {
			max_val = arr[i]; }
	}
	return max_val;
}

template <> char * maxn<char *>(char * str[], size_t n)
{
	unsigned max_size = 0;
	char * temp = "";
	for (unsigned i = 0; i < n; i++) {
		unsigned str_len = strlen(str[i]);
		if (str_len > max_size) {
			max_size = str_len;
			temp = str[i]; }
	}
	return temp;
}

template <typename T>
void populate_array(T arr[], size_t n, char * type_name)
{
	cout << "Input array consist of " << n << " ";
	cout << type_name << " type members" << endl;
	for (unsigned i = 0; i < n; i++) {
		cout << "Input " << i+1 << " array member: ";
		cin >> arr[i]; }
}