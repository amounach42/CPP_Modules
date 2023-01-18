#include "Contact.hpp"

Contact::Contact()
{
    firstName = "";
    lastName = "";
    nickName = "";
    phoneNumber = "";
    darkestSecret = "";
}

void Contact::fill(std::string message, std::string &attr)
{
    while (attr.empty())
    {
        print << message;
        if (!std::getline(std::cin, attr).good())
            exit(1);
    }
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
        print << "|" << std::setw(10) << idx << "|" << std::setw(10) << lastName << "|" << std::setw(10) << nickName << "|" << std::endl;
}