#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

std::string HumanB::getName() const
{
    return this->name;
}

void    HumanB::setName(std::string name)
{
    this->name = name;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    if (weapon)
        std::cout << this->getName() << "  attacks with their " << this->weapon->getType() << std::endl;
}