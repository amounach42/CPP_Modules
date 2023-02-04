#include "Contact.hpp"

std::string Contact::getFirstName() const
{
    return this->firstName;
}

std::string Contact::getLastName() const
{
    return this->lastName;
}

std::string Contact::getNickName() const
{
    return this->nickName;
}

std::string Contact::getPhoneNumber() const
{
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return this->darkestSecret;
}

void Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
    this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

Contact::Contact()
{
    firstName = "";
    lastName = "";
    nickName = "";
    phoneNumber = "";
    darkestSecret = "";
}

Contact::Contact(std::string firstName, std::string lastName,
                 std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickName = nickName;
    this->phoneNumber = phoneNumber;
    this->darkestSecret = darkestSecret;
}

void Contact::fill(std::string message, std::string &attr)
{
    while (attr.empty())
    {
        std::cout << message;
        if (!std::getline(std::cin, attr).good())
            exit(1);
    }
}

std::string Contact::truncate(std::string text)
{
    if (text.length() >= 10)
        return (text.substr(0, 9) + ".");
    return (text);
}

bool Contact::empty() const
{
    if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() || darkestSecret.empty())
        return (true);
    return (false);
}

void Contact::display(int idx)
{
    if (!empty())
        std::cout << "|" << std::setw(10) << idx
                  << "|" << std::setw(10) << truncate(firstName)
                  << "|" << std::setw(10) << truncate(lastName)
                  << "|" << std::setw(10) << truncate(nickName)
                  << "|" << std::endl;
}