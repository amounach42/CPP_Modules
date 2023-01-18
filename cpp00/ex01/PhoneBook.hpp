#pragma once

#include <iostream>
#include "Contact.hpp"

class PhoneBook{
    public:
    Contact contacts[8] = {Contact(), Contact(), Contact(), Contact(), Contact(), Contact(), Contact(), Contact()};
    void ADD();
    void SEARCH();
    void EXIT();
};
void    fill_contact(str message, str attr);

