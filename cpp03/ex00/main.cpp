#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap victim("enemy");
    ClapTrap attacker("amounach");
    attacker.setAttackDamage(7);
    attacker.attack(victim.getName());
    victim.takeDamage(attacker.getAttackDamage());

    attacker.setAttackDamage(7);
    attacker.attack(victim.getName());
    victim.takeDamage(attacker.getAttackDamage());

    attacker.setAttackDamage(1);
    attacker.attack(victim.getName());
    victim.takeDamage(attacker.getAttackDamage());
    victim.beRepaired(10);
    for (int i = 0; i < 10; i++)
    {
        attacker.attack(victim.getName());
        std::cout << RED << "Energy points: " << RESET << attacker.getEnergyPoint() << std::endl;
    }
    return (0);
}