#include "Account.h"
#include "BankBill.h"
#include "vector"
Account::Account(string UserName, string Email, string Password) : User( Email, Password )
{
	this->UserName = UserName;
}

void Account::setUserName(string UserName)
{
	this->UserName = UserName;
}

string Account::getUserName()
{
	return this->UserName;
}

void Account::addBill(BankBill bill)
{
	Bills.push_back(bill);
}

void Account::deleteBill(int Number)
{
	Bills.erase(Bills.begin() + Number);
}

BankBill Account::getBill(int Number)
{
	return this->Bills.at(Number);
}
