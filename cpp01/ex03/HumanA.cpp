#include "HumanA.hpp"

HumanA::HumanA(){};

std::string HumanA::getName() const
{
    return this->name;
}

void    HumanA::setName(std::string name)
{
    this->name = name;
}

