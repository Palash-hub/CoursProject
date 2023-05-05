#include <iostream>
#pragma once
using namespace std;
class User
{
	string Email;
	string Password;
public:
	User();
	User(string Email, string Password);

	string getEmail();
	void setEmail(string Email);
	
	string getPassword();
	void setPassword(string Password);

	~User();
};

