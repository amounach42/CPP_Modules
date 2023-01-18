#pragma once

#include <iostream>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
public:
    int index;
    Contact contacts[8];
    void add();
    void search();

    PhoneBook();
};
