#include <iostream>
#include <string>
#include "bank_account_class.h"

Bank_Account::Bank_Account(const std::string & name, const std::string & account, double num)
{
	investor = name;
	account_number = account;
	balance = num;
}

void Bank_Account::deposit_money(double num)
{
	if (num < 0) {
		std::cout << "You can not deposit negative amount" << std::endl; }
	else {
		balance += num; }
}
void Bank_Account::withdraw_money(double num)
{
	if (num < 0) {
		std::cout << "You can not withdraw negative amount" << std::endl; }
	else {
		balance -= num; }
}
void Bank_Account::show() const
{
	std::cout << "Account holder: " << investor << std::endl;
	std::cout << "Account number: " << account_number << std::endl;
	std::cout << "Account balance: " << balance << std::endl;
}