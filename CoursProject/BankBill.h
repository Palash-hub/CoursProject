#pragma once
class BankBill
{
	long int Number;
	int Amount;
public:

	BankBill(long int Number, int Amount);
	~BankBill();

	long int getNumber();

	int getAmount();
	void setAmount(int amount);
};

