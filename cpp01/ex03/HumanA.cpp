#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

std::string HumanA::getName() const
{
    return this->name;
}

void HumanA::setName(std::string name)
{
    this->name = name;
}

void    HumanA::attack()
{
    std::cout << this->getName() << " attacks with their " << this->weapon.getType();
}

