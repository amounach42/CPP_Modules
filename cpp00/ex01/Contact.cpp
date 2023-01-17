#ifndef CONTACT_HPP
#define CONTACT_HH

#include <iostream>
#include "PhoneBook.hpp"

void    fill_contact(str message, str attr)
{
    while (attr.empty())
    {
        print << message;
        std:: getline(std::cin, attr);
        if (std::cin.good())
            return ;
    }
}

#endif