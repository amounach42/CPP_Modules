#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weapon;

public:
    // HumanB();
    std::string getName() const;
    void setName(std::string);
    void setWeapon(Weapon &weapon);
    HumanB(std::string name);
    void attack();
};