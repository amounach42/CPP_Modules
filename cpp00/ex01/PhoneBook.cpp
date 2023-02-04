#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::add(void)
{
	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

	Contact::fill("Enter first name: ", firstName);
	Contact::fill("Enter last name: ", lastName);
	Contact::fill("Enter nick name: ", nickName);
	Contact::fill("Enter phone number: ", phoneNumber);
	Contact::fill("Enter darkest secret: ", darkestSecret);
	Contact newContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	this->contacts[index++ % 8] = newContact;
}

void PhoneBook::get_info(int idx)
{
	std::cout << "First Name: ";
	std::cout << PhoneBook::contacts[idx].getFirstName() << std::endl;
	std::cout << "Last Name: ";
	std::cout << PhoneBook::contacts[idx].getLastName() << std::endl;
	std::cout << "Nick Name: ";
	std::cout << PhoneBook::contacts[idx].getNickName() << std::endl;
	std::cout << "Phone Number: ";
	std::cout << PhoneBook::contacts[idx].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << PhoneBook::contacts[idx].getDarkestSecret() << std::endl;
}

static int is_valid_index(std::string idx)
{
	if (idx.empty())
		return (std::cerr << "Error: you must insert an index!" << std::endl, 0);
	if (idx[0] < '0' || idx[0] > '9')
		return (std::cerr << "Error: Index must be an integer!" << std::endl, 0);
	if (idx.length() > 2)
		return (std::cerr << "Error: Invalid index!" << std::endl, 0);
	if (atoi(idx.c_str()) < 0 || atoi(idx.c_str()) > 8)
		return (std::cerr << "Error: Index must be between 0 and 8!" << std::endl, 0);
	return (1);
}

void PhoneBook::search(void)
{
	std::string idx;

	if (index > 0)
	{
		std::cout << "|" << std::setw(10) << "Index"
				  << "|" << std::setw(10) << "FirstName"
				  << "|" << std::setw(10) << "LastName"
				  << "|" << std::setw(10) << "NickName"
				  << "|" << std::endl;
		for (int idx = 0; idx < 8; idx++)
			this->contacts[idx].display(idx);
		std::cout << "Enter the index: ";
		if (!std::getline(std::cin, idx).good())
		{
			std::cerr << "Error: bad input" << std::endl;
		}
		else
		{
			if (is_valid_index(idx) && !(PhoneBook::contacts[atoi(idx.c_str())].getFirstName().empty()))
				get_info(atoi(idx.c_str()));
		}
	}
}

PhoneBook::PhoneBook()
{
	this->index = 0;
}
