#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &weapon;

public:
    HumanA(std::string, Weapon&);
    std::string getName() const;
    void setName(std::string);
    void attack();
};