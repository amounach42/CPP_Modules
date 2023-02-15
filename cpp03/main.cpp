#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap target1("Attacker");
    ClapTrap target2("Deffender");

    target1.setAttackDamage(15);
    target1.attack(target2.getName());
    target2.takeDamage(2);
    std::cout << target1.getName() <<  " Attack Damage " << target1.getAttackDamage() << std::endl;
    std::cout << target2.getName() <<  " Hit points " << target2.getHitPoint() << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    target2.beRepaired(3);
    std::cout << target2.getName() << " Hit points " << target2.getHitPoint() << std::endl;
    std::cout << target2.getName() << " Energy points " << target2.getEnergyPoint() << std::endl;
    return (0);
}