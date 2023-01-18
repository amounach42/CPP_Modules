#include  "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::ADD(void)
{
	Contact  newContact;

	fill_contact("Enter first name", newContact.firstName);
	fill_contact("Enter last name", newContact.lastName);
	fill_contact("Enter nick name", newContact.nickName);
	fill_contact("Enter phone number", newContact.phoneNumber);
	fill_contact("Enter darkest secret", newContact.darkestSecret);

	for (int i = 0; i < 8; i++)
	{
		if(contacts[i].firstName.empty())
			contacts[i] = newContact;
		break ;
	}
}
