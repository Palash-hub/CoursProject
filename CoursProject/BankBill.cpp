#include "BankBill.h"

BankBill::BankBill(long int Number, int Amount)
{
	this->Amount = Amount;
	this->Number = Number;
}

BankBill::~BankBill()
{
}

long int BankBill::getNumber()
{
	return this->Number;
}

int BankBill::getAmount()
{
	return this->Amount;
}

void BankBill::setAmount(int amount)
{
	this->Amount = amount;
}
