#include <iostream>
#include <string>
#include "bank_account_class.h"

int main()
{
	using namespace std;
	string full_name;
	string acc_num;
	double num = 0.0;
	cout << "Input account holder: ";
	getline(cin, full_name);
	cout << "Input account number: ";
	getline(cin, acc_num);
	cout << "Input account balance: $";
	cin >> num;
	Bank_Account account1 (full_name, acc_num, num);
	account1.show();
	cout << "Input amount to deposit the account: $";
	cin >> num;
	account1.deposit_money(num);
	account1.show();
	cout << "Input amount to withdraw from the account: $";
	cin >> num;
	account1.withdraw_money(num);
	account1.show();
	system("PAUSE");
	return EXIT_SUCCESS;
}