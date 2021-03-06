#include <iostream>
#include <new>

using namespace std;

const size_t LEN = 20;
const size_t BLEN = 56;
char buffer[BLEN];

struct chaff
{
	char dross[LEN];
	int slag;
};

int main()
{
	size_t arr_size = 2;
	chaff * p = new (buffer) chaff[arr_size];
	char str[LEN];

	//Populate an array
	for (unsigned i = 0; i < arr_size; i++) {
		cout << "Input dross for " << i + 1 << " chaff: ";
		cin.getline(str, LEN);
		strcpy_s(p[i].dross, str);
		cout << "Input slag for " << i + 1 << " chaff: ";
		(cin >> p[i].slag).get(); }

	//Show the array
	for (unsigned i = 0; i < arr_size; i++) {
		cout << "Chaff # " << i + 1 << " dross: " << p[i].dross << endl;
		cout << "Chaff # " << i + 1 << " slag: " << p[i].slag << endl;
	}

	system("PAUSE");
	return EXIT_SUCCESS;
}