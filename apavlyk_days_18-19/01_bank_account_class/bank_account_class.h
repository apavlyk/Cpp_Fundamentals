#ifndef BANK_ACCOUNT_CLASS_H_
#define BANK_ACCOUNT_CLASS_H_
#include <string>
class Bank_Account
{
private:
	std::string investor;
	std::string account_number;
	double balance;
public:
	Bank_Account(const std::string & name, const std::string & account, double num = 0.0);
	void deposit_money(double num);
	void withdraw_money(double num);
	void show() const;
};
#endif