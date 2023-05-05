#pragma once
#include "BankBill.h"
#include "iostream"
#include "User.h"
#include "vector"
class Account :
    public User
{
    string UserName;
    vector<BankBill> Bills;
public:
    
    Account(string UserName, string Email, string Password);
    
    void setUserName(string UserName);
    string getUserName();

    friend int findBill(Account account, int NumOfBill);

    void addBill(BankBill bill);
    void deleteBill(int Number);
    BankBill getBill(int Number);
};

