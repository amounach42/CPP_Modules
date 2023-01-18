#pragma once

#include <iostream>
#include <iomanip>
#include <string>

#define print std::cout
#define str std::string

class Contact {
	public:
	str firstName;
	str lastName;
	str nickName;
	str phoneNumber;
	str darkestSecret;

	public:
		Contact(); // Default constuctor
		bool empty() const;
		void fill(std::string message, std::string &attr);
		void display(int idx);
};
