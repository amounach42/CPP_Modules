#pragma once

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	void setFirstName(std::string);
	void setLastName(std::string);
	void setNickName(std::string);
	void setPhoneNumber(std::string);
	void setDarkestSecret(std::string);
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

	Contact();
	Contact(std::string, std::string, std::string, std::string, std::string);
	bool empty() const;
	static void fill(std::string, std::string &);
	void display(int);
	std::string truncate(std::string);
};
