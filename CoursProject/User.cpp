#include "User.h"


User::User(string Email, string Password)
{
	this->Email = Email;
	this->Password = Password;
}

string User::getEmail()
{
	return this->Email;
}

void User::setEmail(string Email)
{
	this->Email = Email;
}

User::~User()
{
}

string User::getPassword()
{
	return this->Password;
}

void User::setPassword(string Password)
{
	this->Password = Password;
}
