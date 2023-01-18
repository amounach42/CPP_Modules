#include "PhoneBook.hpp"

void PhoneBook::add(void)
{
	Contact newContact;

	newContact.fill("Enter first name: ", newContact.firstName);
	newContact.fill("Enter last name: ", newContact.lastName);
	newContact.fill("Enter nick name: ", newContact.nickName);
	newContact.fill("Enter phone number: ", newContact.phoneNumber);
	newContact.fill("Enter darkest secret: ", newContact.darkestSecret);

	this->contacts[index++ % 8] = newContact;
}

void PhoneBook::search(void)
{
	if (index > 0)
	{
		print << "|" << std::setw(10) << "Index"
			  << "|" << std::setw(10) << "FirstName"
			  << "|" << std::setw(10) << "NickName"
			  << "|" << std::endl;
		for (int idx = 0; idx < 8; idx++)
			this->contacts[idx].display(idx);
	}
}

PhoneBook::PhoneBook()
{
	this->index = 0;
}
