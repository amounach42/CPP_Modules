#pragma once

#include <iostream>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
private:
    Contact contacts[8];
    int index;

public:
    void add();
    void search();
    PhoneBook();
    void get_info(int);
};
