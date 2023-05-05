#include "BankBill.h"
#include "Account.h"
#include <iostream>
#include <vector> 
#include <cctype>
#include <algorithm>
#include <string>



int findBill(Account account, int NumOfBill)
{
	if (!account.Bills.empty())
	{
		for (int i = 0; i < account.Bills.size(); i++)
		{
			if (account.Bills.at(i).getNumber() == NumOfBill)
			{
				return account.Bills.at(i).getNumber();
			}
		}
	}
	else {
		return -1;
	}
}

constexpr unsigned int StrToInt(const char* str, int h = 0) 
{
	return !str[h] ? 5381 : (StrToInt(str, h + 1) * 33) ^ str[h];
}

int main()
{
	string moment;
	cout << "Do you have an account?" << endl;
	cin >> moment;
	transform(moment.begin(), moment.end(), moment.begin(), ::tolower);
	switch (StrToInt(moment.c_str()))
	{
	case(StrToInt("yes")):
		cout << "you input yes" << endl;
		break;
	case(StrToInt("no")):
		cout << "you input no" << endl;
	default:
		break;
	}
	/*if (moment._Equal("yes")) {
		cout << "you input yes" << endl;
	}
	else {
		if(moment._Equal("yes"))
	}*/
	//Account test("Sopeake", "pashaXD@mail.com", "12345");
	//BankBill bill(1514234, 10000);
	//test.addBill(bill);
	//cout << test.getEmail() << ' ' << test.getPassword() << ' ' << test.getUserName() << endl;
	//cout << test.getBill(0).getNumber() << ' ' << test.getBill(0).getAmount();
}
